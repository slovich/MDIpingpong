#ifndef MPIPINGPONG_H
#define MPIPINGPONG_H

#include <mpi.h>
#include <string>

class MPIPingPong {
public:
    MPIPingPong(int argc, char** argv);
    ~MPIPingPong();

    void sendMessage(const std::string& msg);
    std::string tryReceiveMessage();
    std::string receiveMessage();

    int getRank() const;
    int getSize() const;

private:
    int rank;
    int size;
};

#endif // MPIPINGPONG_H
