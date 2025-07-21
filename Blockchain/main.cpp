#include "Blockchain.h"
#include "Wallet.h"
#include <iostream>

int main() {
    Blockchain myChain;

    Wallet alice("Alice");
    Wallet bob("Bob");

    myChain.addTransaction(Transaction(alice.address, bob.address, 50));
    myChain.minePendingTransactions();

    myChain.addTransaction(Transaction(bob.address, alice.address, 30));
    myChain.minePendingTransactions();

    myChain.printChain();
    return 0;
}
