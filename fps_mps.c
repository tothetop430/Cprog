/* FPS AND MPS */
#include <stdio.h>
#include <math.h>
int main()
{
	int min,mile1=5280;
	float sec,speed1,speed2,mile2=1609.34f;
	scanf("%d",&min);
	scanf("%f",&sec);
	sec=roundf(sec);

	double sec1=min*60+sec;
	speed1=mile1/sec1;
	speed2=mile2/sec1;

	printf("%.2f fps",speed1);
	printf("\n%.2f mps",speed2);
	return 0;
}
