#include "Blockchain.h"
#include <iostream>

Blockchain::Blockchain() : difficulty(2) {
    chain.push_back(createGenesisBlock());
}

Block Blockchain::createGenesisBlock() const {
    return Block(0, {}, "0");
}

void Blockchain::addTransaction(const Transaction& tx) {
    pendingTransactions.push_back(tx);
}

void Blockchain::minePendingTransactions() {
    Block newBlock(static_cast<int>(chain.size()), pendingTransactions, chain.back().hash);
    newBlock.mineBlock(difficulty);
    chain.push_back(newBlock);
    pendingTransactions.clear();
}

void Blockchain::printChain() const {
    for (const auto& block : chain) {
        std::cout << "Block " << block.index << " | Hash: " << block.hash
            << " | Prev: " << block.previousHash << "\n";
    }
}
