#ifndef EPSIFILECOMPRESSOR_H
#define EPSIFILECOMPRESSOR_H

#include <QMainWindow>

namespace Ui {
class EpsiFileCompressor;
}

class EpsiFileCompressor : public QMainWindow
{
    Q_OBJECT

public:
    void uncompress(const QString &ecfFileName, const QString &folder );
    void compress(const QString &folder, const QString &ecfFileName);
    explicit EpsiFileCompressor(QWidget *parent = 0);
    ~EpsiFileCompressor();

private:
    Ui::EpsiFileCompressor *ui;
};

#endif // EPSIFILECOMPRESSOR_H
