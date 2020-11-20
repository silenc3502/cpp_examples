ch		:= "ch"
num_set		:= $(shell seq 01 06)
modules		:= $(foreach str, $(num_set), $(ch)$(str))

.PHONY:	all $(modules)
all: $(modules)
	@echo "$(modules)"

$(modules):
	$(MAKE) --directory=$@

clean:
	for dir in $(modules); do \
		$(MAKE) -C $$dir clean; \
	done
