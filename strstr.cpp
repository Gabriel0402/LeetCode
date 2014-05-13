char *strStr(char *ori, char *str){
	if(ori==NULL || str==NULL || strlen(ori)==0) return ori;
	if(strlen(str)>strlen(ori)) return NULL;
	for(int i=0;i<=strlen(ori)-strlen(str);i++){
		bool flag=true;
		for(int j=0;j<strlen(str);j++){
			if(ori[i+j]!=str[j]){
				flag=false;
				break;
			}
		}
		if(flag) return ori+i;
	}
	return NULL;
}