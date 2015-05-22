#include "epsifilecompressor.h"
#include "ui_epsifilecompressor.h"

EpsiFileCompressor::EpsiFileCompressor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EpsiFileCompressor)
{
    ui->setupUi(this);
}

void EpsiFileCompressor::uncompress(const QString &ecfFileName, const QString &folder )
{

}
void EpsiFileCompressor::compress(const QString &folder, const QString &ecfFileName)
{

}

EpsiFileCompressor::~EpsiFileCompressor()
{
    delete ui;
}
