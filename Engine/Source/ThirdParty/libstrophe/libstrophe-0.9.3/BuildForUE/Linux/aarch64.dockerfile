FROM multiarch/centos:aarch64-clean
RUN yum install -y epel-release && \
    yum install -y cmake3 make gcc-c++
ENTRYPOINT ["/bin/bash"]
