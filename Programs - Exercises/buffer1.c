int full=0;
void msgReader(){
	char *m;
	while(1){
		if(!full){
			sleep();
		}
		m = take_msg();
		full=0;
		wakeup(msgWriter);
		printf("The message is %s", m);
	}
}

void msgWriter(){
	char *m;

	while(1){
		m = prepare_msg();
		if (full){
			sleep();
		}
		put_msg(m);
		full =1;
		wakeup(msgReader);
	}
}

msgReader();