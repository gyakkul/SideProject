# Copyright Epic Games, Inc. All Rights Reserved.
FROM helix-and-node
LABEL maintainer="Jake.Romigh@epicgames.com"

# expose the robomerge web page
EXPOSE 8877

# Create container folder for local files
RUN mkdir /functional_tests

WORKDIR /functional_tests

COPY functional_tests/framework/package.json .
COPY functional_tests/framework/package-lock.json .

RUN npm install

COPY functional_tests/framework .

# Environment variables
ENV P4PORT p4docker:1666

RUN tsc -p .

RUN echo Node $(node -v)
RUN echo Typescript $(tsc -v)

CMD [ "node", "dist/tests.js" ]
