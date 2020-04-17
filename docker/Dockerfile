FROM alpine:latest

RUN apk update && \
    apk upgrade && \
    apk add alpine-sdk bash clang

COPY run.sh /bin/run.sh

CMD /bin/run.sh