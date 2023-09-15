FROM ubuntu

MAINTAINER "SOUMIK DAS"

RUN apt-get update

RUN apt-get install -y gcc

COPY aces.c /app/

WORKDIR /app

RUN gcc -o aces aces.c

CMD ["./aces"]