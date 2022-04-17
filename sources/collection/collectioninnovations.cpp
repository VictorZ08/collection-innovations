#include "collectioninnovations.h"
#include "ui_collectioninnovations.h"

#include "QStringListModel"
#include "QItemSelectionModel"
#include <QStandardItemModel>

CollectionInnovations::CollectionInnovations(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CollectionInnovations)
{
    ui->setupUi(this);

    QStringList numbers1;
    numbers1 << "ФСТЭК" << "ФСБ" << "Лесники";
    QStringListModel *model1 = new QStringListModel(numbers1, this);

    int a = model1->setHeaderData(0, Qt::Horizontal, tr("ColumnName"), Qt::DisplayRole);
    ui->m_tw1->setModel(model1);
    ui->m_tw1->horizontalHeader()->setStretchLastSection(true);

    QStringList numbers2;
    numbers2    << "Нововведение 1" << "Нововведение 2" << "Нововведение 3"
                << "Нововведение 4" << "Нововведение 5" << "Нововведение 6"
                << "Нововведение 7" << "Нововведение 8" << "Нововведение 9"
                << "Нововведение 10" << "Нововведение 11" << "Нововведение 12"
                << "Нововведение 13" << "Нововведение 2" << "Нововведение 3"
                << "Нововведение 16" << "Нововведение 5" << "Нововведение 6"
                << "Нововведение 7" << "Нововведение 8" << "Нововведение 9"
                << "Нововведение 10" << "Нововведение 11" << "Нововведение 12"
                << "Нововведение 4" << "Нововведение 5" << "Нововведение 6"
                << "Нововведение 7" << "Нововведение 8" << "Нововведение 9"
                << "Нововведение 10" << "Нововведение 11" << "Нововведение 12"
                << "Нововведение 1" << "Нововведение 2" << "Нововведение 3"
                << "Нововведение 4" << "Нововведение 5" << "Нововведение 6"
                << "Нововведение 7" << "Нововведение 8" << "Нововведение 9"
                << "Нововведение 10" << "Нововведение 11" << "Нововведение 12";
    QStringListModel *model2 = new QStringListModel(numbers2, this);

    ui->m_tw2->setModel(model2);
    ui->m_tw2->horizontalHeader()->setStretchLastSection(true);

    QStringList numbers3;
    numbers3    <<  "Леони́д Ио́вич Гайда́й (30 января 1923, Свободный, "
                    "Свободненский уезд, Амурская губерния, РСФСР, "
                    "СССР — 19 ноября 1993, Москва, Россия) — "
                    "советский и российский кинорежиссёр, сценарист и актёр; "
                    "народный артист СССР (1989), "
                    "лауреат Государственной премии РСФСР имени братьев Васильевых (1970).";

    ui->m_te1->setText(numbers3.at(0));

    /*border: 2px solid #3873d9;
    border-top-color: #4287ff;
    border-radius: 4px;
    background-color: #fff;
    background-image: url(:/img/other/background.png);
    gridline-color: #777;
    selection-background-color: #ccdfff;
    color:#333;
    font-size:12px;

QTableView {
    background-color:rgb(42, 42, 42);
    color: rgb(0, 255, 0);
}*/
}

CollectionInnovations::~CollectionInnovations()
{
    delete ui;
}
