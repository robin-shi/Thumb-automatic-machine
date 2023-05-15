typedef enum PitchMap{P2__,P7_,P5_,P3_,P1_,P6,P4,P2,P1,P3,P5,P7,P2_,P4_,P6_,P1__,P3__}PitchMap;
typedef enum Interval{I16=250,I16_=375,I8=500,I8_=750,I4=1000,I4_=1500,I2=2000,I2_=3000,I1=4000}Interval;
typedef struct Note
{
PitchMap pitchMap;
Interval interval;
}Note;
//int PitchToPWM(Pitch pitch);