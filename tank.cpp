#include "tank.h"
#include <math.h>
#include "QDebug"

#define DEBUG 0
Tank::Tank(QObject *parent) :
    QObject(parent)
{
   m_t1_height= 0;
   m_t1_area= AREA;
   m_t1_inputFlow = 0;
   m_t1_outputValve = CLOSE;

   m_t2_height= 0;
   m_t2_area= AREA;
   m_t2_inputFlow = 0;
   m_t2_outputValve = CLOSE;

   m_valve12 = CLOSE;

}

void Tank::set_T1_Area(float area)
{ if (area > 0) m_t1_area = area; }

void Tank::set_T1_InputFlow(float flow)
{ if (flow >= 0) m_t1_inputFlow = flow;}

void Tank::set_T1_OutputValve(bool valve)
{ m_t1_outputValve = valve;}

void Tank::set_T1_Volume(float volume)
{ m_t1_height = volume/m_t1_area; }


void Tank::set_T2_Area(float area)
{ if (area > 0) m_t2_area = area; }

void Tank::set_T2_InputFlow(float flow)
{ if (flow >= 0) m_t2_inputFlow = flow;}

void Tank::set_T2_OutputValve(bool valve)
{ m_t2_outputValve = valve;}

void Tank::set_T2_Volume(float volume)
{ m_t2_height = volume/m_t2_area; }

void Tank::set_T12_OutputValve(bool valve)
{ m_valve12 = valve;}

void Tank::tik()
{
   float x1, x2;
   float secInTik = 0.1, dh;
   float a,b,c;
   x1 = 0;
   a = m_t1_inputFlow/m_t1_area;
   b = 0;
   c = 0;
   dh = m_t1_height - m_t2_height;
   if (m_valve12 == OPEN)   {
      if (dh>HISTERESIS)       {
         b= C12*sqrt( fabs(dh));
      }
      if (dh<-HISTERESIS)      {
         b= -C12*sqrt( fabs(dh));
      }
   }

   if (m_t1_outputValve == OPEN)   {
      c = C1*sqrt(m_t1_height);
   }

   emit t1_Output_Flow_1(c);
   emit t1_Output_Flow_2(b);

#if DEBUG
   qDebug() << "Old x1" << m_t1_height <<" a= "<< a <<" b= "<< b <<" c= "<< c;
#endif
   x1 = m_t1_height + (a-b-c)*secInTik;

   x2 = 0;
   a = m_t2_inputFlow/m_t2_area;
   c = 0;
   if (m_t2_outputValve == OPEN)   {
      c = C2*sqrt(m_t2_height);
   }
#if DEBUG
   qDebug() << "Old x2" << m_t2_height <<" a= "<< a <<" b= "<< b <<" c= "<< c;
 #endif

   emit t2_Output_Flow_1(c);
   emit t2_Output_Flow_2(-b);
   x2 = m_t2_height + (a+b-c)*secInTik;


   if (x1>=0) m_t1_height = x1;
   else m_t1_height = 0;

   if (x2>=0) m_t2_height = x2;
   else m_t2_height = 0;

   emit t1_HeightChange(m_t1_height);
   emit t2_HeightChange(m_t2_height);

}
