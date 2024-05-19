

prev:
	chmod +x ./commit.sh
	chmod +x ./genslide.sh
	chmod +x ./freshslide.sh

push:
	./commit.sh


doc:
	./freshslide.sh