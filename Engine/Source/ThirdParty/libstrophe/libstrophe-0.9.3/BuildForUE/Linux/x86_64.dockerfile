FROM centos:7
RUN yum install -y epel-release && \
    yum install -y cmake3 make gcc-c++
ENTRYPOINT ["/bin/bash"]
