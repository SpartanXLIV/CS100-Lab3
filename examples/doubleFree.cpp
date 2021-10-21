int main() {
    int *p = new int(10);

    delete p;
//    delete p;  // deleting should fix the memory leaksS

    return 0;
}
