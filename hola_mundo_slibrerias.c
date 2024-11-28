int main() {
    char mensaje[] = "Hola Mundo\n";
    char *ptr = mensaje;

    while (*ptr) {
        __asm__ __volatile__(
            "mov $1, %%rax\n"  // syscall: write
            "mov $1, %%rdi\n"  // file descriptor: stdout
            "mov %0, %%rsi\n"  // buffer: mensaje
            "mov $1, %%rdx\n"  // size: 1 byte
            "syscall\n"
            :
            : "r"(ptr)
            : "%rax", "%rdi", "%rsi", "%rdx");
        ptr++;
    }

    return 0;
}
