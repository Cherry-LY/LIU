#include <stdio.h>

int main() {

    int n, i;

    scanf("%d\n", &n);  // ��n������

    for (i = 0; i < n; i++) {
        
		// ����4������������4���������򣬲�������

        // �뽫�������д���������ʹ��ѭ�����
 
        int a, b, c, d;
        int temp;
 //a <= b <= c <= d       
        scanf("%d%d%d%d",&a,&b,&c,&d);
        
        if(a > b)
        {
        	temp = a;
        	a = b;
        	b = temp;//��ab��ֵ��С��һ����Ϊa,��ʱ���� a <= b ,b���ԭʼab�нϴ��һ�� 
		}
        if(b > c)
        {
        	temp = b;
        	b = c;
        	c = temp;//��bc��ֵ��С��һ����Ϊb ,��ʱ���� b <= c �������п����¸�ֵ֮���b<a 
		}
        if(c > d)
        {
        	temp = c;
        	c = d;
        	d = temp;//��cd��ֵ��С��һ����Ϊc ,��ʱ���� c <= d ,�����п����¸�ֵ��� 
		} 
		if(a > b)
        {
        	temp = a;
        	a = b;
        	b = temp;//��ab��ֵ��С��һ����Ϊa,��ʱ���� a <= b ,b���ԭʼab�нϴ��һ�� 
		}
        if(b > c)
        {
        	temp = b;
        	b = c;
        	c = temp;//��bc��ֵ��С��һ����Ϊb ,��ʱ���� b <= c �������п����¸�ֵ֮���b<a 
		}
		if(a > b)
        {
        	temp = a;
        	a = b;
        	b = temp;//��ab��ֵ��С��һ����Ϊa,��ʱ���� a <= b ,b���ԭʼab�нϴ��һ�� 
		}

    printf("%d %d %d %d\n",a,b,c,d);//����һ�����з�ֵ20�� 
    }
     
    return 0;

}


