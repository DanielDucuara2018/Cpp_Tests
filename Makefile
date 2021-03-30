.PHONY: clean All

All:
	@echo "----------Building project:[ PassageByVariableExample2_Reference - Debug ]----------"
	@cd "PassageByVariableExample2_Reference" && "$(MAKE)" -f  "PassageByVariableExample2_Reference.mk"
clean:
	@echo "----------Cleaning project:[ PassageByVariableExample2_Reference - Debug ]----------"
	@cd "PassageByVariableExample2_Reference" && "$(MAKE)" -f  "PassageByVariableExample2_Reference.mk" clean
