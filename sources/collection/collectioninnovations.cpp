#include "collectioninnovations.h"
#include "ui_collectioninnovations.h"

CollectionInnovations::CollectionInnovations(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CollectionInnovations)
{
    ui->setupUi(this);
}

CollectionInnovations::~CollectionInnovations()
{
    delete ui;
}

