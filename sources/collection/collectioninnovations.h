#ifndef COLLECTIONINNOVATIONS_H
#define COLLECTIONINNOVATIONS_H

#include <QMainWindow>

namespace Ui {
class CollectionInnovations;
}

class CollectionInnovations : public QMainWindow
{
    Q_OBJECT

public:
    explicit CollectionInnovations(QWidget *parent = nullptr);
    ~CollectionInnovations();

private:
    Ui::CollectionInnovations *ui;
};

#endif // COLLECTIONINNOVATIONS_H
