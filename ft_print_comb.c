void p(char c){
	write(1,&c,1);
}

int main(){
	int f=1;
	for(char j,k,i=48;++i<56;)
		for(j=i+1;++j<57;)
			for(k=j+1;++k<58;){
				if(f==0){
					p(44);p(32);
				}
				p(i);
				p(j);
				p(k);
				f=0;
			}
}
