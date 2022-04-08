#ifndef COLLECTIONINNOVATIONS_H
#define COLLECTIONINNOVATIONS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CollectionInnovations; }
QT_END_NAMESPACE

class CollectionInnovations : public QMainWindow
{
    Q_OBJECT

public:
    CollectionInnovations(QWidget *parent = nullptr);
    ~CollectionInnovations();

private:
    Ui::CollectionInnovations *ui;
};
#endif // COLLECTIONINNOVATIONS_H
