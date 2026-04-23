# 🔧 Marvellous Character Device Driver – C Project

A Linux Character Device Driver implemented in C using kernel module programming.

---

## 📌 Description

This project demonstrates how to create, load, and interact with a character device driver in Linux.  
It provides communication between user space and kernel space using standard file operations.

---

## 🛠 Technologies Used

- Language: C  
- Platform: Linux Kernel  
- Compiler: GCC  

---

## 📂 Project Structure

```
Device_Driver/
├── MarvellousDriver.c
├── Makefile
└── README.md
```

---

## ⚙️ Compilation

```bash
make
```

---

## ▶️ Execution

### Load the Driver

```bash
sudo insmod MarvellousDriver.ko
```

### Verify Module

```bash
lsmod | grep MarvellousDriver
```

### Check Kernel Logs

```bash
dmesg
```

### Remove the Driver

```bash
sudo rmmod MarvellousDriver
```

---

## ▶️ How It Works

- The driver is compiled as a kernel module.
- It is loaded into the kernel using `insmod`.
- A device file is created for user interaction.
- User applications can perform operations like:
  - `open()`
  - `read()`
  - `write()`
  - `close()`
- The driver is removed using `rmmod`.

---

## 📋 Features

- Character device driver  
- Kernel module implementation  
- Basic file operations support  
- Interaction via device file  

---

## 🧠 Concepts Used

- Kernel module programming  
- Device driver architecture  
- File operations structure  
- User space and kernel space communication  

---

## 👨‍💻 Author

**Shivam Rajendra Kale**
