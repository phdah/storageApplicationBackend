install:
	g++ -g main.cpp -lpq -I . -o myprogram.sh

run:
	./myprogram.sh

clean:
	rm myprogram.sh
