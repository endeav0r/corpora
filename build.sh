#!/bin/bash

docker build -t falcon-corpora-builder docker

docker run --rm -ti -v $(pwd):/corpora -v $(pwd)/build:/build falcon-corpora-builder