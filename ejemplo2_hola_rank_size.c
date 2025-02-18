#include <mpi.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int myiud, npes;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    system("hostname");

    if(myid == 0) {
        printf("Hola, soy el cero. MI id es %i de %i! MI PID es %d", myid, npes, getpid());
    } else {
        printf("Hola, soy el proceso %d de %d! MI PID es %d", myid, npes, getpid());
    }

    MPI_Finalize();
    return 0;
}