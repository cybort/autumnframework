.SUFFIXES:	.cpp .o

include ../config/makeConfig
include ../config/make.rules
include $(OBJSFILE)

.cpp.o:
	$(CXX) $(CXXFLAGS) -I../include -c $<

$(DLLLIBNAME):$(OBJS)
	$(DLLMAKER) $(DLLLDFLAGS) -o $@ $(OBJS)
	$(CP) $@ ../lib/

all:: $(DLLLIBNAME)

clean::
	$(RM) *.o ./$(DLLLIBNAME)
	$(RM) *_Wrapper.*
	$(RM) ../lib/$(DLLLIBNAME)

test::

depend::
	$(CXX) -I../include $(DEPFLAGS) *.cpp >$(DEPENDFILE)
	@echo "OBJS= \\" >$(OBJSFILE)
	@ls *.cpp | sed -e 's/cpp$$/o \\/' >>$(OBJSFILE)
	@echo >>$(OBJSFILE)

include $(DEPENDFILE)
include $(WRAPPERDEP)

