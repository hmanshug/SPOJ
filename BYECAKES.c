#include <stdio.h>

int main() {
	int e, f, s, m, E, F, S, M;
	float p, q, r, t, max;

	while(1) {
		scanf("%d%d%d%d%d%d%d%d", &e, &f, &s, &m, &E, &F, &S, &M);
		if(e==-1)
		break;
		
		p=(int)ceil(e/(float)E);
		q=(int)ceil(f/(float)F);
		r=(int)ceil(s/(float)S);
		t= (int)ceil(m/(float)M);
		
		
		if(p>=q && p>=r && p>=t)
			max=p;
		else if(q>=p && q>=r && q>=t)
			max=q;
		else if(r>=q && r>=p && r>=t)
			max=r;
		else
			max=t;
		//printf("%f %f %f %f %f\n", p, q, r, t, max);
		printf("%d %d %d %d\n", (int)max*E-e, (int)max*F-f, (int)max*S-s, (int)max*M-m);
	}
	
	return 0;
}
