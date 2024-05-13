#include <QCoreApplication>
#include "hungrycat.h"

// will fail because we are making a copy
void do_fail(HungryCat cat) {
    cat.meow();
}

void do_ptr(HungryCat *cat) {
    cat->meow();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    HungryCat kitty;
    // do_fail(kitty);

    do_ptr(&kitty);

    return a.exec();
}
