FROM composer:latest AS composer
FROM php:8.4-fpm

RUN CPU_CORES="$(getconf _NPROCESSORS_ONLN)";
ENV MAKEFLAGS="-j${CPU_CORES}"

RUN apt update -y && apt install -y \
    wget \
    zip \
    git \
    apt-utils \
    sudo \
    libicu-dev \
    libgmp-dev \
    libzip-dev && \
    pecl install psr zephir_parser #xdebug

RUN docker-php-ext-install zip gmp intl mysqli && \
    docker-php-ext-enable psr zephir_parser #xdebug

COPY --from=composer /usr/bin/composer /usr/local/bin/composer
# Bash script with helper aliases
COPY ./.bashrc /root/.bashrc

CMD ["php-fpm"]
