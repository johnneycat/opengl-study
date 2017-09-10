#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QtOpenGL/QtOpenGL>
#include <GL/glu.h>


class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    GLWidget(QWidget *parent = 0, const QGLWidget * shareWidget = 0, Qt::WindowFlags f = 0);
    ~GLWidget();
signals:

public slots:

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    void mouseDoubleClickEvent( QMouseEvent *event );
    void keyPressEvent(QKeyEvent *e);
private:
    GLfloat Point[5][3];

};

#endif // WIDGET_H
