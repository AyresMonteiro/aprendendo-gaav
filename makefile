vetores_r2_teste: obj/vetores_r2.o src/vetores_r2_teste.c
	gcc src/vetores_r2_teste.c obj/vetores_r2.o -o vetores_r2_teste

obj/vetores_r2.o: src/vetores_r2.c
	gcc src/vetores_r2.c -c -o obj/vetores_r2.o
