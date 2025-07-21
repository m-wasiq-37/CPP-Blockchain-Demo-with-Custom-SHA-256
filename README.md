# **Simple Blockchain in C++ (No External Libraries)**

## **Overview**

This project is a **minimal blockchain implementation in C++**, created for educational purposes.
It simulates the core principles of blockchain technology:

* **Block and Blockchain data structures**
* **Transactions between wallets**
* **Mining via Proof-of-Work (Difficulty-based hashing)**
* **SHA-256 implementation from scratch (no OpenSSL, no Crypto++ libraries)**

The code is written in **pure C++** to be **portable and dependency-free**, making it easy to study, compile, and run on any platform with a C++ compiler.

<img width="1048" height="295" alt="image" src="https://github.com/user-attachments/assets/a6dfede1-d8d6-4ccb-8b1a-9b3d8e70e877" />

---

## **Features**

* 🚀 **Blockchain Class:** Manages the chain of blocks and handles mining.
* 🧱 **Block Class:** Represents individual blocks, including transactions and hashes.
* 🔐 **Transaction Class:** Simulates value transfers between wallets.
* 💼 **Wallet Class:** Generates simple wallet addresses and manages balance simulation.
* 🔑 **SHA-256 Hashing:** Custom SHA-256 implementation written in C++ (no external libraries).

---

## **Project Structure**

| File                        | Description                                                                                       |
| --------------------------- | ------------------------------------------------------------------------------------------------- |
| **Block.h / .cpp**          | Defines a `Block` with index, transactions, previous hash, and a mining function (proof-of-work). |
| **Blockchain.h / .cpp**     | Manages the entire chain, verifies integrity, and processes pending transactions.                 |
| **Transaction.h / .cpp**    | Models transactions between wallets, including amounts and "signing."                             |
| **Wallet.h / .cpp**         | Creates wallet addresses and sends transactions.                                                  |
| **sha256\_helper.h / .cpp** | Implements the SHA-256 hashing algorithm from scratch (no external libraries).                    |
| **main.cpp**                | Demonstrates how to create wallets, send transactions, mine blocks, and print the blockchain.     |

---

## **How It Works**

1. **Genesis Block:**
   The blockchain starts with a special genesis block.

2. **Transactions:**
   Wallets create transactions that are stored as **pending transactions**.

3. **Mining:**
   Pending transactions are mined into a block. Mining requires finding a hash that meets the **difficulty** condition (leading zeros).

4. **Chain Validation:**
   Each block is linked to the previous one via hash pointers, ensuring immutability. The chain can be validated to detect tampering.

---

## **Compilation**

### **Requirements**

* C++11 or later
* Visual Studio / g++ / clang++ (Any modern compiler)

### **Build Instructions**

#### **On Windows (Visual Studio):**

1. Create a new project and add all `.cpp` and `.h` files.
2. Set the build configuration to **x64 Debug/Release**.
3. Press **Build & Run**.

#### **On Linux/macOS (g++):**

```bash
g++ -std=c++11 -o blockchain main.cpp Block.cpp Blockchain.cpp Transaction.cpp Wallet.cpp sha256_helper.cpp
./blockchain
```

---

## **Example Output**

```
Block 0 | Hash: 2ac9a6746aca543af8dff39894cfe8173afba21eb01c6fae33d52947222855ef | Prev: 0
Block 1 | Hash: 001b4ce109dcc0f6bbc581b222054f18320b562ff546de115e69e497f8ab71fc | Prev: 2ac9a6746aca543af8dff39894cfe8173afba21eb01c6fae33d52947222855ef
Block 2 | Hash: 0057d9799d6593a9df94f8f105b10f3826db6a731e5c695257dc4c28c8eca671 | Prev: 001b4ce109dcc0f6bbc581b222054f18320b562ff546de115e69e497f8ab71fc
```

---

## **Concepts Demonstrated**

* **Proof-of-Work (Mining)**
* **Block Hashing**
* **Transaction Recording**
* **Chain Validation**
* **Simple Wallet and Address Generation**

---

## **Limitations**

This is a **simplified blockchain** for learning purposes:

* No real cryptography for transaction signatures (only string hashing).
* No networking (single-node blockchain).
* No persistent storage (everything is in-memory).
* No Merkle Trees (transactions are hashed together directly).

---

## **Why This Project?**

Most blockchain tutorials use **Python, JavaScript, or external libraries**.
This project shows how to build blockchain logic **from scratch in C++**, making it ideal for:

* Students learning blockchain fundamentals
* Developers curious about low-level blockchain mechanics
* Demonstrating hashing, mining, and chain validation in a lightweight setup

---

## **License**

MIT License – Free to use, modify, and distribute.
