# Copyright Epic Games, Inc. All Rights Reserved.
FROM helix
LABEL maintainer="james.hopkin@epicgames.com"

# Install Node.js
RUN curl -sL https://rpm.nodesource.com/setup_14.x | bash -
RUN yum install -y nodejs

# install typescript
RUN npm install -g typescript@^4.4
