#ifndef TANK_H
#define TANK_H

#define AREA 0.001018
#define C1   0.0292
#define C2   0.0259
#define C12  0.0267
#define HISTERESIS 0.002
#define MAX_FLOW 0.00000059174
#define OPEN true
#define CLOSE false

#include <QObject>

class Tank : public QObject
{
    Q_OBJECT
public:    
   explicit Tank(QObject *parent = 0);

private:

   float m_t1_height;      // Current liquid height in Tank (M)
   float m_t1_area;        // Area of tank (M^2)
   float m_t1_inputFlow;   // Current input liquid flow (M%^3/Sec)
   bool  m_t1_outputValve; // Open/Close

   float m_t2_height;      // Current liquid height in Tank (M)
   float m_t2_area;        // Area of tank (M^2)
   float m_t2_inputFlow;   // Current input liquid flow (M%^3/Sec)
   bool  m_t2_outputValve; // Open/Close

   bool  m_valve12;        //Open/Close


signals:
   void t1_HeightChange(float height);
   void t2_HeightChange(float height);
   // To do: emmit signals to notify output flows.
   void t1_Output_Flow_1(float flow1);
   void t1_Output_Flow_2(float flow2);

   void t2_Output_Flow_1(float flow1);
   void t2_Output_Flow_2(float flow2);

public slots:
   void set_T1_InputFlow(float flow);
   void set_T1_Volume (float volume);
   void set_T1_Area (float area);
   void set_T1_OutputValve(bool open);

   void set_T2_InputFlow(float flow);
   void set_T2_Volume (float volume);
   void set_T2_Area (float area);
   void set_T2_OutputValve(bool open);

   void set_T12_OutputValve(bool open);

   void tik();
};

#endif // TANK_H
