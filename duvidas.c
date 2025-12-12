//Duvidas:


//Qual a diferença entre isso:

 struct tipo{
  char Palavra[20];
  void *Prox; 
  };
  typedef struct tipo TIPO;

//E isso?


  typedef struct {
  char Palavra[20];
  void *Prox; 
  } TIPO;
