#include "MPIPingPong.h"
#include <iostream>

MPIPingPong::MPIPingPong(int argc, char** argv) {
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
}

MPIPingPong::~MPIPingPong() {
    MPI_Finalize();
}

void MPIPingPong::sendMessage(const std::string& msg) {
    int target = (rank == 0) ? 1 : 0;
    MPI_Send(msg.c_str(), msg.size() + 1, MPI_CHAR, target, 0, MPI_COMM_WORLD);
}

std::string MPIPingPong::receiveMessage() {
    char buffer[256];
    MPI_Recv(buffer, 256, MPI_CHAR, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    return std::string(buffer);
}

int MPIPingPong::getRank() const {
    return rank;
}

int MPIPingPong::getSize() const {
    return size;
}
