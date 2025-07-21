#include "Block.h"
#include <sstream>

Block::Block(int idx, const std::vector<Transaction>& txs, const std::string& prevHash)
    : index(idx), transactions(txs), previousHash(prevHash), nonce(0) {
    hash = calculateHash();
}

std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << previousHash << nonce;
    for (const auto& tx : transactions)
        ss << tx.sender << tx.receiver << tx.amount;
    return sha256(ss.str());
}

void Block::mineBlock(int difficulty) {
    std::string target(difficulty, '0');
    while (hash.substr(0, difficulty) != target) {
        nonce++;
        hash = calculateHash();
    }
}
