Algoritmo MPI - Caso de Uso em Sistemas Distribuídos

📌 Descrição
Este projeto apresenta um caso de uso do algoritmo Ping-Pong utilizando MPI (Message Passing Interface) em uma aplicação com interface gráfica desenvolvida em Qt.
O objetivo é demonstrar, de forma prática, como processos distintos podem se comunicar em um ambiente distribuído, trocando mensagens entre si de maneira síncrona.
Cada instância da aplicação representa um usuário/processo independente. A comunicação entre eles é realizada via MPI, onde o envio e recebimento de mensagens segue o modelo clássico do algoritmo Ping-Pong.

🎯 Motivação
O projeto foi desenvolvido como parte da disciplina Sistemas Distribuídos do curso de Engenharia da Computação da Universidade Federal do Maranhão (UFMA), ministrada pelo professor Dr. Luiz Henrique Neves Rodrigues, no 1º período de 2026.

A aplicação compõe a 2ª nota da disciplina, servindo como exemplo prático de comunicação entre processos em sistemas distribuídos.

👥 Equipe
* Cleila Monteiro Dutra Galiza
* Guilherme de Aquino Pacheco
* Nilton Maciel Mangueira
* Raniere Mendes dos Santos
* Tereza Clarice da Silva Rocha

⚙️ Funcionalidade

Interface gráfica simples e intuitiva para envio e recebimento de mensagens.
Cada instância da aplicação corresponde a um processo MPI distinto.
Implementação do algoritmo Ping-Pong para troca de mensagens entre processos.
Exibição das mensagens enviadas e recebidas em tempo real na interface.

🚀 Execução

Pré-requisitos

* Windows 10 ou superior
* Microsoft MPI (MSMPI) instalado

Como executar

* Compile o projeto em modo Release.
* No prompt de comando, execute:
<code> mpiexec -n 2 ./pingpong.exe </code>
* O parâmetro -n 2 indica que serão abertas duas instâncias da aplicação.
* É possível alterar para -n 3, -n 4, etc., para abrir mais processos.

Aprendizado
Este projeto reforça conceitos fundamentais de sistemas distribuídos, como:
* Comunicação entre processos independentes.
* Sincronização e bloqueio em chamadas MPI.
* Uso de ferramentas práticas (MSMPI + Qt) para simulação de ambientes distribuídos.
