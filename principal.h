#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <QMainWindow>
#include <QMouseEvent>
#include <QImage>
#include <QPainter>
#include <QPaintEvent>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QColorDialog>
#include <QColor>
#include <QInputDialog>
#include <QRectF>

#define DEFAULT_ANCHO 3

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
private slots:
    void on_actionNuevo_triggered();
    void on_actionSalir_triggered();
    void on_actionGuardar_triggered();
    void on_actionColor_triggered();
    void on_actionAncho_triggered();
    void on_actionLibre_triggered();
    void on_actionLineas_triggered();
    void on_actionRectangulos_triggered();
    void on_actionCircunferencias_triggered();
private:
    Ui::Principal *ui;
    QImage *m_imagen; // Imagen sobre la cual se va a deibujar
    QPainter *m_painter; // El objeto painter
    QPoint m_ptInicial; // Punto inicial para dibujar
    QPoint m_ptFinal; // Punto final para dibujar
    QColor m_color; // Variable para cambiar el color
    int m_ancho; // Variable para cambiar el ancho
    int m_opcion; // Variable para elegir las opciones de dibujo
    bool m_toogle = true; // Variable que verifica al momento de elegir una opción
};
#endif // PRINCIPAL_H
