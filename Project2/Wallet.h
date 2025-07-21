#pragma once
#ifndef WALLET_H
#define WALLET_H

#include <string>

class Wallet {
public:
    std::string address;

    Wallet(const std::string& addr) : address(addr) {}
};

#endif
