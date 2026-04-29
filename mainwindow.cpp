#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    int argc = 0;
    char** argv = nullptr;
    pingpong = new MPIPingPong(argc, argv);

    // Timer para sondar mensagens recebidas
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::verificarMensagens);
    timer->start(200);
}

MainWindow::~MainWindow() {
    delete ui;
    delete pingpong;
}

void MainWindow::appendMessage(const QString& msg) {
    ui->textEdit->append(msg);
    ui->textEdit->verticalScrollBar()->setValue(ui->textEdit->verticalScrollBar()->maximum());
}

void MainWindow::on_pushButton_clicked() {
    QString msg = ui->lineEdit->text();
    if (!msg.isEmpty()) {
        pingpong->sendMessage(msg.toStdString());
        appendMessage("Você: " + msg);
        ui->lineEdit->clear();
    }
}

void MainWindow::verificarMensagens() {
    std::string recebido = pingpong->tryReceiveMessage();
    if (!recebido.empty()) {
        appendMessage("Outro: " + QString::fromStdString(recebido));
    }
}