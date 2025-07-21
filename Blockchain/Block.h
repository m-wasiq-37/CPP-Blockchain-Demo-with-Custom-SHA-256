#pragma once
#ifndef BLOCK_H
#define BLOCK_H

#include "Transaction.h"
#include "sha256_helper.h"
#include <vector>
#include <string>

class Block {
public:
    int index;
    std::vector<Transaction> transactions;
    std::string previousHash;
    std::string hash;
    int nonce;

    Block(int idx, const std::vector<Transaction>& txs, const std::string& prevHash);

    std::string calculateHash() const;
    void mineBlock(int difficulty);
};

#endif
