# Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

FROM centos:7
LABEL maintainer="james.hopkin@epicgames.com"

# Install epel-release
RUN yum install -y epel-release
RUN yum install -y make

# Add Perforce Yum repo
COPY perforce.repo /etc/yum.repos.d/perforce.repo
RUN rpm --import https://package.perforce.com/perforce.pubkey

# Install p4 (and net-tools for netstat)
RUN yum install -y helix-p4d-2022.1 net-tools
