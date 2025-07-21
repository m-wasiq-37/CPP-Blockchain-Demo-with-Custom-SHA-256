#pragma once
#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "Block.h"
#include <vector>

class Blockchain {
public:
    Blockchain();

    void addTransaction(const Transaction& tx);
    void minePendingTransactions();
    void printChain() const;

private:
    std::vector<Block> chain;
    std::vector<Transaction> pendingTransactions;
    int difficulty;

    Block createGenesisBlock() const;
};

#endif
