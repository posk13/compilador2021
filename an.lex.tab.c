
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "an.lex.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <malloc.h>
    #include "y.tab.h"
    #define TAM 100
    
    // variables para analizador lexico
    FILE * input=NULL;  
    FILE * lista_tokens=NULL; 
    FILE * tabla_simbolos=NULL;
    FILE * tabla_simbolos_orig=NULL;  
    FILE * tokens_unicos=NULL;
    FILE * final_asm=NULL;
    FILE * concat=NULL;
    char constanteEntera [40] = {0}; 
    char constanteReal [40]= {0};
    char constanteString [40]= {0}; 
    char IdPalabraReservada [40]= {0};
    char operador [40]= {0}; 
    char comparador [40]= {0}; 
    char otro[40]= {0};
    int estado_actual=0; 
    int estado_segundo=0;
    int estado_final=28; 
    int estado_error=29;
    int hay_error=0; 
    int position_row=1;
    int position_col=0;
    char caracter=' '; 
    struct Token {
        int number;
        char name[40];      
        char lexema[40];    
        char tipo[40];      
        char valor[40];     
        int longitud;
    };
    typedef struct {
        char index[40];
        char cell [40];
        char tag [40];
    }tira;
    typedef struct {
        char nombre[40];
        char tipo [40];
        char valor [40];
        char longitud [40];
    }TablaSimbolos;

    struct Token token_confirmado;    
    
    // funciones para analizador lexico
    int yylex(void); int getColumnByEvent(char letra); void cleanTokens();
    void(*tabla_funciones[28][26])(); int tabla_estados [28][26];
    struct Token getTokenIdWords();struct Token getTokenInt();
    struct Token getTokenReal();struct Token getTokenString();
    struct Token getTokenOp();struct Token getTokenComp(); 
    struct Token getTokenOther(); void buildToken();
    void F0();void F1();void F2();void F3();void F4();void F5();void F6();void F7();
    void F8();void F9();void F10();void F11();void F12();void F13();void F15();
    void F17();void F18();void F19();void F20();void F21();void F22();void F23();
    void F24();void F25();void F26();void F27();void ERROR();void F(); 
    void showTokens(); void show_TS();
    
    // funciones para analizador sintactico
    int yyerror(char *s);

    // variables para codigo intermedio
    tira *tira_polaca;
    tira *tira_polaca_copia;
    TablaSimbolos * dinamic_TS;

    int cantidad_elementos_tira = 0; // indica la fila
    char comparador_RR [4] = {0}; // para imprimir los comparadores
    FILE * repre_intermedia=NULL;
    char ID_aux_TP[40] = {0}; // variable aux que almacena el id una vez que se van reduciendo las reglas
    char STR_aux_N1[40] = {0}; // variable aux que almacena el string una vez que se van reduciendo las reglas
    char STR_aux_N2[40] = {0}; // variable aux que almacena el string una vez que se van reduciendo las reglas
    char TYPE_aux[40] = {0}; // para los tipos de datos
    char num_tag_else[40] = "asm-jump";
    int imprimir_cadena_NUM = 0; int indice_tira = -1; int cant_selecciones = 0; int cant_bucles = 0;
    int put = 0; char negt_number[40] = {0};

    // funciones para codigo intermedio
    void apilar_polaca(char * yval, char * type_yval);  void aplicar_polaca();  void mostrar_polaca(); 
    char * getIdTP(); char *invertir(char cadena[]);
    void llenarTS(); void actualizarTS(char type[], int num_tipo); char * removeSubString(char * str,int num_tipo);  char * insertSpaWhite(char * line);
    void addTypeTS(); void printTS(); void printTiraPolaca(); char * skipMenosOP(char celda_tira []);
    void verificar_tipos();

    char habilitar_tira=' ';
    char habilitar_multiple = ' '; 
    char listaIDS[1000] = {0};  
    int position_TS = 0;  // todo lo que dice TS es Tabla de Simbolos
    char ** memory_TS;

    //estructuras para la pila
    struct elemento {
	int dato;
    int posicion;
	struct elemento *next;
    };

    struct pila {
        struct elemento *frente;
        int tamano;
    };

    typedef struct {
        struct elemento registro;
    }tiraIW;

    //funciones utilizadas por la pila
    void aplicar_algoritmo_pilas();
    int crear(struct pila *);
    int apilar(struct pila *, struct elemento);
    int desapilar(struct pila *, struct elemento *);
    int estaVacia(struct pila);
    int tamano(struct pila p);
    int mostrar(struct pila *p, struct elemento *);
    int retornar_tope(struct pila *p, struct elemento *elemento);

    //funciones para generar ASSEMBLER
    void generarAssembler(); char * skipPointsC(char celda_tira []); char * skipComillasC(char string []); char * changeRealC(char stringR []);char * skipPesosC(char celda_tira []);
    void contar_if_wh(); 


/* Line 189 of yacc.c  */
#line 204 "an.lex.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CSTRING = 258,
     CENT = 259,
     CREAL = 260,
     WHILE = 261,
     IF = 262,
     ELSE = 263,
     DECLARE = 264,
     ENDDECLARE = 265,
     REAL = 266,
     INT = 267,
     STRING = 268,
     GET = 269,
     PUT = 270,
     ID = 271,
     SUMA = 272,
     RESTA = 273,
     MULT = 274,
     DIV = 275,
     ASIGN = 276,
     CONCAT = 277,
     AND = 278,
     OR = 279,
     NOT = 280,
     MAYOR = 281,
     MENOR = 282,
     MENORIGUAL = 283,
     MAYORIGUAL = 284,
     IGUAL = 285,
     DISTINTO = 286,
     PUNTOYC = 287,
     LLAVEA = 288,
     LLAVEC = 289,
     PARENTA = 290,
     PARENTC = 291,
     COMA = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 131 "an.lex.y"

    int number;
    char name[40];      
    char lexema[40];    
    char tipo[40];      
    char valor[40];     
    int longitud;



/* Line 214 of yacc.c  */
#line 288 "an.lex.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 300 "an.lex.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    10,    12,    15,    19,    24,    26,
      28,    30,    32,    36,    39,    41,    43,    46,    49,    53,
      57,    61,    65,    67,    69,    71,    75,    79,    83,    87,
      91,    95,    97,    99,   103,   107,   109,   111,   113,   116,
     119,   123,   125,   127,   129,   131,   133,   135,   139,   143,
     144,   153,   154,   163,   168,   170,   172,   173,   174,   184,
     185,   186,   187,   202,   203,   207,   210,   213,   216
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,     9,    41,    10,    40,    -1,    40,    -1,
      44,    -1,    44,    40,    -1,    42,    43,    32,    -1,    42,
      43,    32,    41,    -1,    12,    -1,    11,    -1,    13,    -1,
      16,    -1,    16,    37,    43,    -1,    45,    32,    -1,    57,
      -1,    60,    -1,    66,    32,    -1,    64,    32,    -1,    16,
      21,    46,    -1,    16,    21,    45,    -1,    16,    21,    47,
      -1,    16,    21,    48,    -1,    47,    -1,    48,    -1,    49,
      -1,    47,    17,    49,    -1,    47,    18,    49,    -1,     3,
      22,     3,    -1,    16,    22,     3,    -1,    16,    22,    16,
      -1,     3,    22,    16,    -1,     3,    -1,    50,    -1,    49,
      19,    50,    -1,    49,    20,    50,    -1,    16,    -1,     4,
      -1,     5,    -1,    18,     4,    -1,    18,     5,    -1,    35,
      47,    36,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    47,    51,    47,    -1,    48,
      51,    48,    -1,    -1,    35,    52,    36,    54,    23,    35,
      52,    36,    -1,    -1,    35,    52,    36,    55,    24,    35,
      52,    36,    -1,    25,    35,    56,    36,    -1,    52,    -1,
      53,    -1,    -1,    -1,    58,     6,    35,    59,    56,    36,
      33,    40,    34,    -1,    -1,    -1,    -1,    61,     7,    35,
      62,    56,    36,    33,    40,    34,    63,     8,    33,    40,
      34,    -1,    -1,    15,    65,     3,    -1,    15,     4,    -1,
      15,     5,    -1,    15,    16,    -1,    14,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   178,   178,   179,   181,   182,   184,   185,   187,   188,
     189,   191,   192,   194,   195,   196,   197,   198,   200,   203,
     205,   207,   208,   209,   211,   212,   213,   215,   218,   221,
     224,   227,   233,   234,   235,   237,   238,   239,   240,   242,
     244,   246,   247,   248,   249,   250,   251,   253,   254,   256,
     256,   257,   257,   259,   260,   262,   264,   264,   264,   267,
     267,   267,   267,   271,   271,   272,   273,   274,   276
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CSTRING", "CENT", "CREAL", "WHILE",
  "IF", "ELSE", "DECLARE", "ENDDECLARE", "REAL", "INT", "STRING", "GET",
  "PUT", "ID", "SUMA", "RESTA", "MULT", "DIV", "ASIGN", "CONCAT", "AND",
  "OR", "NOT", "MAYOR", "MENOR", "MENORIGUAL", "MAYORIGUAL", "IGUAL",
  "DISTINTO", "PUNTOYC", "LLAVEA", "LLAVEC", "PARENTA", "PARENTC", "COMA",
  "$accept", "programa", "bloque", "declaracion", "type", "variables",
  "sentencia", "asignacion", "multiple", "expresion_num",
  "expresion_string", "termino", "factor", "comparador", "comparacion",
  "comp_logico", "$@1", "$@2", "condicion", "iteracion", "$@3", "$@4",
  "seleccion", "$@5", "$@6", "$@7", "salida", "$@8", "entrada", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    40,    40,    41,    41,    42,    42,
      42,    43,    43,    44,    44,    44,    44,    44,    45,    46,
      46,    46,    46,    46,    47,    47,    47,    48,    48,    48,
      48,    48,    49,    49,    49,    50,    50,    50,    50,    50,
      50,    51,    51,    51,    51,    51,    51,    52,    52,    54,
      53,    55,    53,    56,    56,    56,    58,    59,    57,    61,
      62,    63,    60,    65,    64,    64,    64,    64,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     1,     2,     3,     4,     1,     1,
       1,     1,     3,     2,     1,     1,     2,     2,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     1,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     0,
       8,     0,     8,     4,     1,     1,     0,     0,     9,     0,
       0,     0,    14,     0,     3,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      56,     0,     0,    63,     0,     0,     3,     4,     0,    14,
       0,    15,     0,     0,     0,     9,     8,    10,     0,     0,
      68,    65,    66,    67,     0,     0,     1,     5,    13,     0,
       0,    17,    16,    56,    11,     0,    64,    31,    36,    37,
      35,     0,     0,    18,    22,    23,    24,    32,    57,    60,
       2,     0,     6,     0,     0,     0,    38,    39,    35,     0,
       0,     0,     0,     0,     0,     0,    12,     7,    27,    30,
      35,    19,    20,    21,    28,    29,    40,    25,    26,    33,
      34,    35,     0,     0,     0,     0,    54,    55,     0,     0,
       0,     0,     0,    41,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,    49,    47,     0,    48,    56,    56,
      53,     0,     0,     0,     0,     0,     0,    58,    61,     0,
       0,     0,     0,     0,     0,    50,    52,    56,     0,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,    18,    19,    35,     7,     8,    43,    84,
      85,    46,    47,    99,    86,    87,   111,   112,    88,     9,
      10,    64,    11,    12,    65,   121,    13,    24,    14
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int16 yypact[] =
{
      57,    43,    -9,    47,     2,    37,   -82,    93,    21,   -82,
      51,   -82,    55,    35,    60,   -82,   -82,   -82,    79,    90,
     -82,   -82,   -82,   -82,   116,     1,   -82,   -82,   -82,    88,
      91,   -82,   -82,    96,    92,    95,   -82,   106,   -82,   -82,
      -6,    70,    24,   -82,    69,   -82,    71,   -82,   -82,   -82,
     -82,    90,    43,     5,     9,    42,   -82,   -82,   -82,    32,
      24,    24,    24,    24,     6,     6,   -82,   -82,   -82,   -82,
      83,   -82,    69,   -82,   -82,   -82,   -82,    71,    71,   -82,
     -82,   108,    97,    30,    67,    87,   -82,   -82,    98,    99,
       6,    52,   100,   -82,   -82,   -82,   -82,   -82,   -82,    24,
      44,   104,   105,   103,   107,    69,   108,   -82,    96,    96,
     -82,   110,   117,   109,   111,   112,   113,   -82,   -82,    30,
      30,   132,   114,   115,   119,   -82,   -82,    96,   120,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,    -7,    94,   -82,   102,   -82,   101,   -82,   -22,
     -24,    61,    62,    59,   -81,   -82,   -82,   -82,   -47,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -60
static const yytype_int16 yytable[] =
{
      27,    45,    92,    44,    37,    38,    39,    20,    68,    37,
      38,    39,    37,    38,    39,    54,    55,    40,    89,    41,
      59,    69,    81,    25,    41,    70,    50,    41,    38,    39,
      73,    82,    72,    37,    38,    39,    42,    26,   122,   123,
      58,    83,    41,   103,    42,    74,    81,    37,    41,    60,
      61,    21,    22,    28,    15,    16,    17,    29,    75,    42,
     106,    91,    30,    23,   -59,    42,     1,    31,    76,    60,
      61,     2,     3,     4,    56,    57,   107,   105,    93,    94,
      95,    96,    97,    98,    60,    61,    60,    61,    76,    33,
      62,    63,    32,    93,    94,    95,    96,    97,    98,   -56,
     -59,   113,   114,   -59,    25,    55,    34,     2,     3,     4,
       2,     3,     4,    93,    94,    95,    96,    97,    98,    36,
     128,    77,    78,    48,    79,    80,    49,    52,    53,    51,
      55,   -51,    90,   115,   101,   102,   104,   108,   109,   110,
     124,   116,     0,   117,   100,   118,    67,   119,   120,     0,
     125,   126,   127,    66,   129,    71
};

static const yytype_int8 yycheck[] =
{
       7,    25,    83,    25,     3,     4,     5,    16,     3,     3,
       4,     5,     3,     4,     5,    21,    22,    16,    65,    18,
      42,    16,    16,    21,    18,    16,    33,    18,     4,     5,
      54,    25,    54,     3,     4,     5,    35,     0,   119,   120,
      16,    35,    18,    90,    35,     3,    16,     3,    18,    17,
      18,     4,     5,    32,    11,    12,    13,     6,    16,    35,
      16,    83,     7,    16,     7,    35,     9,    32,    36,    17,
      18,    14,    15,    16,     4,     5,   100,    99,    26,    27,
      28,    29,    30,    31,    17,    18,    17,    18,    36,    10,
      19,    20,    32,    26,    27,    28,    29,    30,    31,     6,
       7,   108,   109,     7,    21,    22,    16,    14,    15,    16,
      14,    15,    16,    26,    27,    28,    29,    30,    31,     3,
     127,    60,    61,    35,    62,    63,    35,    32,    22,    37,
      22,    24,    35,    23,    36,    36,    36,    33,    33,    36,
       8,    24,    -1,    34,    85,    34,    52,    35,    35,    -1,
      36,    36,    33,    51,    34,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    14,    15,    16,    39,    40,    44,    45,    57,
      58,    60,    61,    64,    66,    11,    12,    13,    41,    42,
      16,     4,     5,    16,    65,    21,     0,    40,    32,     6,
       7,    32,    32,    10,    16,    43,     3,     3,     4,     5,
      16,    18,    35,    46,    47,    48,    49,    50,    35,    35,
      40,    37,    32,    22,    21,    22,     4,     5,    16,    47,
      17,    18,    19,    20,    59,    62,    43,    41,     3,    16,
      16,    45,    47,    48,     3,    16,    36,    49,    49,    50,
      50,    16,    25,    35,    47,    48,    52,    53,    56,    56,
      35,    47,    52,    26,    27,    28,    29,    30,    31,    51,
      51,    36,    36,    56,    36,    47,    16,    48,    33,    33,
      36,    54,    55,    40,    40,    23,    24,    34,    34,    35,
      35,    63,    52,    52,     8,    36,    36,    33,    40,    34
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 178 "an.lex.y"
    {printf("Regla 1\n"); llenarTS(); aplicar_polaca(); aplicar_algoritmo_pilas();mostrar_polaca();verificar_tipos();contar_if_wh();generarAssembler();;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 179 "an.lex.y"
    {printf("Regla 2\n"); llenarTS(); aplicar_polaca(); aplicar_algoritmo_pilas();mostrar_polaca();verificar_tipos();contar_if_wh();generarAssembler();;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 181 "an.lex.y"
    {printf("Regla 3\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 182 "an.lex.y"
    {printf("Regla 4\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 184 "an.lex.y"
    {printf("Regla 5\n"); habilitar_multiple = 'y';;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 185 "an.lex.y"
    {printf("Regla 6\n"); habilitar_multiple = 'y';;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 187 "an.lex.y"
    {printf("Regla 7\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 188 "an.lex.y"
    {printf("Regla 8\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 189 "an.lex.y"
    {printf("Regla 9\n"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 191 "an.lex.y"
    {printf("Regla 10\n");   ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 192 "an.lex.y"
    {printf("Regla 11\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 194 "an.lex.y"
    {printf("Regla 12\n"); put=3;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 195 "an.lex.y"
    {printf("Regla 13\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 196 "an.lex.y"
    {printf("Regla 14\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 197 "an.lex.y"
    {printf("Regla 16\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 198 "an.lex.y"
    {printf("Regla 17\n"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 200 "an.lex.y"
    {printf("Regla 18\n"); apilar_polaca(getIdTP(), TYPE_aux); 
                               apilar_polaca("A=", "#operator"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 203 "an.lex.y"
    {printf("Regla 19\n"); apilar_polaca(getIdTP(),TYPE_aux);
                               apilar_polaca("A=","#operator");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 205 "an.lex.y"
    {printf("Regla 20\n"); apilar_polaca(getIdTP(),TYPE_aux);
                               apilar_polaca("A=","#operator");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 207 "an.lex.y"
    {printf("Regla 21\n"); apilar_polaca("A=","#operator");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 208 "an.lex.y"
    {printf("Regla 22\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 209 "an.lex.y"
    {printf("Regla 23\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 211 "an.lex.y"
    {printf("Regla 24\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 212 "an.lex.y"
    {printf("Regla 25\n"); apilar_polaca("S+","#operator");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 213 "an.lex.y"
    {printf("Regla 26\n"); apilar_polaca("R-","#operator");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 215 "an.lex.y"
    {printf("Regla 27\n"); apilar_polaca(STR_aux_N1,TYPE_aux); 
                                          apilar_polaca(STR_aux_N2, TYPE_aux); 
                                          apilar_polaca("++","#operator"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 218 "an.lex.y"
    {printf("Regla 28\n"); apilar_polaca(getIdTP(), TYPE_aux); 
                                          imprimir_cadena_NUM++; apilar_polaca(STR_aux_N1,TYPE_aux); 
                                          apilar_polaca("++","#operator");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 221 "an.lex.y"
    {printf("Regla 29\n"); apilar_polaca(getIdTP(), TYPE_aux); 
                                          apilar_polaca(getIdTP(), TYPE_aux);
                                          apilar_polaca("++","#operator");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 224 "an.lex.y"
    {printf("Regla 30\n");imprimir_cadena_NUM++; apilar_polaca(STR_aux_N1,TYPE_aux); 
                                          apilar_polaca(getIdTP(), TYPE_aux); 
                                          apilar_polaca("++","#operator");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 227 "an.lex.y"
    {printf("regla =CTESTRING\n");  
                                             if(put==1){apilar_polaca(STR_aux_N2,TYPE_aux);}
                                            else{apilar_polaca(STR_aux_N1,TYPE_aux);};
                                            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 233 "an.lex.y"
    {printf("Regla 31\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 234 "an.lex.y"
    {printf("Regla 32\n"); apilar_polaca("M*","#operator");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 235 "an.lex.y"
    {printf("Regla 33\n"); apilar_polaca("D/","#operator");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 237 "an.lex.y"
    {printf("Regla 34\n"); apilar_polaca(getIdTP(),TYPE_aux);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 238 "an.lex.y"
    {printf("Regla 35\n"); apilar_polaca(yylval.valor, TYPE_aux);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 239 "an.lex.y"
    {printf("Regla 36\n"); apilar_polaca(yylval.valor,TYPE_aux);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 240 "an.lex.y"
    {printf("Regla 35-partea\n"); strcpy(negt_number, "-"); strcat(negt_number,yylval.valor);
                    apilar_polaca(negt_number,TYPE_aux);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 242 "an.lex.y"
    {printf("Regla 36-parteb\n"); strcpy(negt_number, "-"); strcat(negt_number,yylval.valor);  
                    apilar_polaca(negt_number,TYPE_aux);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 244 "an.lex.y"
    {printf("Regla 37\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 246 "an.lex.y"
    {printf("Regla 38\n"); strcpy(comparador_RR, "BLE"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 247 "an.lex.y"
    {printf("Regla 39\n"); strcpy(comparador_RR, "BGE"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 248 "an.lex.y"
    {printf("Regla 40\n"); strcpy(comparador_RR, "BGT"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 249 "an.lex.y"
    {printf("Regla 41\n"); strcpy(comparador_RR, "BLT"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 250 "an.lex.y"
    {printf("Regla 42\n"); strcpy(comparador_RR, "BNE"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 251 "an.lex.y"
    {printf("Regla 43\n"); strcpy(comparador_RR, "BEQ");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 253 "an.lex.y"
    {printf("Regla 44\n"); if(habilitar_tira=='s'){apilar_polaca("CMP","#comparator_if");}else if(habilitar_tira=='w'){apilar_polaca("CMP","#comparator_while");}; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 254 "an.lex.y"
    {printf("Regla 45\n"); if(habilitar_tira=='s'){apilar_polaca("CMP","#comparator_if");}else if(habilitar_tira=='w'){apilar_polaca("CMP","#comparator_while");};}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 256 "an.lex.y"
    { apilar_polaca(comparador_RR,"#asm-comparator"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 256 "an.lex.y"
    {printf("Regla 46\n"); apilar_polaca(comparador_RR,"#asm-comparator"); apilar_polaca("AND","#logico"); apilar_polaca(" ","#space");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 257 "an.lex.y"
    { apilar_polaca(comparador_RR,"#asm-comparator"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 257 "an.lex.y"
    {printf("Regla 47\n"); apilar_polaca(comparador_RR,"#asm-comparator"); apilar_polaca("OR","#logico"); apilar_polaca(" ","#space");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 259 "an.lex.y"
    {printf("Regla 48\n"); apilar_polaca("NOT","#logico");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 260 "an.lex.y"
    {printf("Regla 49\n"); 
                        apilar_polaca(comparador_RR,"#asm-comparator"); apilar_polaca(" ","#space");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 262 "an.lex.y"
    {printf("Regla 50\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 264 "an.lex.y"
    {apilar_polaca("WH_I","#inicio_wh");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 264 "an.lex.y"
    {habilitar_tira='w';;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 264 "an.lex.y"
    {printf("Regla 51\n"); apilar_polaca(" ","#space"); 
                                                                                                                            apilar_polaca("BI","#asm-jump"); apilar_polaca("WH_F","#fin_wh");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 267 "an.lex.y"
    {apilar_polaca("IF_I","#inicio_if");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 267 "an.lex.y"
    {habilitar_tira='s';;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 267 "an.lex.y"
    { printf("Regla 52\n"); cant_selecciones++; printf("CANT SELECCIONES ES: %d\n",cant_selecciones);
                                                                                                                        apilar_polaca(" ","#space"); apilar_polaca("BI","#asm-jump"); apilar_polaca("IF_F","#fin_if");  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 269 "an.lex.y"
    { printf("Regla 53\n"); apilar_polaca("ELSE_F","#asm-jump");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 271 "an.lex.y"
    { printf("IMPRIMIR CADENA es: %d\n\n\n\n", imprimir_cadena_NUM); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 271 "an.lex.y"
    {printf("Regla 54\n"); apilar_polaca(STR_aux_N2,TYPE_aux);apilar_polaca("PUT","#operator"); put=1; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 272 "an.lex.y"
    {printf("Regla 55\n"); apilar_polaca(yylval.valor, TYPE_aux); apilar_polaca("PUT","#operator"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 273 "an.lex.y"
    {printf("Regla 56\n"); apilar_polaca(yylval.valor, TYPE_aux); apilar_polaca("PUT","#operator"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 274 "an.lex.y"
    {printf("Regla 57\n"); apilar_polaca(getIdTP(),TYPE_aux);apilar_polaca("PUT","#operator");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 276 "an.lex.y"
    {printf("Regla 58\n"); apilar_polaca(getIdTP(),TYPE_aux);apilar_polaca("GET","#operator");;}
    break;



/* Line 1455 of yacc.c  */
#line 2095 "an.lex.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 277 "an.lex.y"


int main(){ // INICIO MAIN
    input = fopen("prueba.txt", "rb"); 
    lista_tokens = fopen("lista_tokens.txt", "w");
    tabla_simbolos = fopen("tabla_simbolos.txt", "w+"); 
    tabla_simbolos_orig = fopen("tabla_simbolos-orig.txt", "w+");
    tokens_unicos = fopen("tokens_unicos.txt", "w+");
    repre_intermedia = fopen("intermedia.txt", "w+");
    final_asm = fopen("Grupo2.asm", "w+");
    concat=fopen("concat.txt", "r");

    rewind(lista_tokens);
    rewind(tabla_simbolos);
    rewind(tabla_simbolos_orig);
    rewind(tokens_unicos);
    rewind(repre_intermedia);
    rewind(final_asm);
    
    if((repre_intermedia != NULL)||(input != NULL)||(lista_tokens != NULL)||(tabla_simbolos != NULL)||(tokens_unicos != NULL)||(tabla_simbolos_orig != NULL)||(final_asm != NULL)){
        fprintf (lista_tokens, "%s\t\t%s\n\n", "ID", "NOMBRE");
        fflush(lista_tokens);
        fprintf (tabla_simbolos, "%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\n\n", "NOMBRE", "TIPO", "VALOR", "LONGITUD");
        fflush(tabla_simbolos);
        fprintf (tabla_simbolos_orig, "%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\n\n", "NOMBRE", "TIPO", "VALOR", "LONGITUD");
        fflush(tabla_simbolos_orig);

        int recibo;
        recibo = yyparse();
        if (recibo == 0){
           printf(" * * * ??Parser Ok! * * * \n"); 
        }else   
            printf(" * * * ??Parser Error! * * * \n");
        fclose(input); 
        fclose(lista_tokens);
        fclose(tokens_unicos);
        fclose(tabla_simbolos_orig); 
        fclose(tabla_simbolos);
        fclose(repre_intermedia);
        fclose(final_asm);
        fclose(concat);
        remove("tokens_unicos.txt"); // Destruimos el archivo una vez utilizado
    }
    else{
        perror("Ocurrio un error al intentar abrir el archivo\n");
        return 1;
    }

    fflush(lista_tokens);
    fflush(tabla_simbolos);
    fflush(tabla_simbolos_orig);
    fflush(tokens_unicos);
    fflush(repre_intermedia);
    fflush(final_asm);
    fflush(concat);
    free(tira_polaca); // liberamos la memoria dinamica
    free(tira_polaca_copia);
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      FUNCIONES       //
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int yylex(void) {
    while(estado_actual != estado_final){
        if((caracter = fgetc(input)) != EOF){
            position_col++;
            int num_col = getColumnByEvent(caracter);
            int num_row = estado_actual; // al principio, estado actual = 0
            (*tabla_funciones[num_row][num_col])();  // ejecuta la funcion correspondiente
            estado_actual = tabla_estados[num_row][num_col]; // actualizamos estado actual

            if((estado_actual == estado_error)||(hay_error == 1)){
                exit(1);
            }
            if((estado_segundo == 0)||(estado_actual == 3)||(estado_actual == 9)||(estado_actual == 10)||(estado_actual == 12)){
                estado_segundo = estado_actual;
            }
        } 
        else if(caracter == EOF){
            break;
        }
    }

    if(estado_actual == estado_final){
        buildToken();
        int num_token = token_confirmado.number;  // guardo numero de token
        yylval.number = token_confirmado.number;  // guardo numero de token
        
        printf("YYLVAL NUMBER: %d\n", yylval.number);
        // YYLVAL almacena, por defecto, un valor de tipo ENTERO (un solo tipo)

        // si es cte INT o cte REAl
        if((token_confirmado.number == 260) || (token_confirmado.number == 259)) { 
            strcpy(yylval.valor, token_confirmado.valor);  // guardo el valor asociado al token
            strcpy(TYPE_aux, "#");
            strcat(TYPE_aux, token_confirmado.tipo);
            printf("-----------------------------------------------------------YYLVAL TYPE ES : %s\n",TYPE_aux);
            printf("YYLVAL VALOR ES : %s\n",yylval.valor);
        }   
        // si es ID
        else if (yylval.number == 271) {
            if(habilitar_multiple == 'y'){
                strcat(listaIDS, token_confirmado.lexema);
                strcpy(TYPE_aux, "#");
                strcat(TYPE_aux, token_confirmado.tipo);
                printf("-----------------------------------------------------------YYLVAL TYPE ES : %s\n",TYPE_aux);
                
            }else{
                strcpy(listaIDS, " ");
            }
            printf("-----------------------------------------------------------YYLVAL LEXEMA ES : %s\n",listaIDS);
        }
        // si es cte STRING
        else if(yylval.number == 258) {
            //strcpy(yylval.valor, token_confirmado.valor);  // guardo el valor asociado al token
            imprimir_cadena_NUM++;
            if(put==3){
                imprimir_cadena_NUM == 0;
                strcpy(STR_aux_N2, token_confirmado.valor);
                printf("-----------------------------------------------------------YYLVAL VALOR STRING N2 ES : %s\n",STR_aux_N2);
                strcpy(TYPE_aux, "#");
                strcat(TYPE_aux, token_confirmado.tipo);
                printf("-----------------------------------------------------------YYLVAL TYPE ES : %s\n",TYPE_aux);    
                put=0;
            }
            if(imprimir_cadena_NUM == 1) {
                strcpy(STR_aux_N1, token_confirmado.valor);
                strcpy(TYPE_aux, "#");
                strcat(TYPE_aux, token_confirmado.tipo);
                printf("-----------------------------------------------------------YYLVAL TYPE ES : %s\n",TYPE_aux);    
                printf("-----------------------------------------------------------YYLVAL VALOR STRING N1 ES : %s\n",STR_aux_N1);
            }
            else if(imprimir_cadena_NUM == 2){
                strcpy(STR_aux_N2, token_confirmado.valor);
                printf("-----------------------------------------------------------YYLVAL VALOR STRING N2 ES : %s\n",STR_aux_N2);
                strcpy(TYPE_aux, "#");
                strcat(TYPE_aux, token_confirmado.tipo);
                printf("-----------------------------------------------------------YYLVAL TYPE ES : %s\n",TYPE_aux);    
                imprimir_cadena_NUM = 0;
            }

        }
        // si es de tipo INT, REAL o STRING
        else if((yylval.number == 266)||(yylval.number == 267)||(yylval.number == 268)){
            strcpy(TYPE_aux, "#");
            strcat(TYPE_aux, token_confirmado.tipo);
            printf("-----------------------------------------------------------YYLVAL TYPE ES : %s\n",TYPE_aux);
        }
        // si no cumple alguna de las condiciones anteriores, guardo un espacio en blanco
        else{
            strcpy(yylval.valor, " ");  // guardo el valor asociado al token
        }

        estado_actual = 0; estado_segundo = 0; // reseteamos el automata
                
        if((caracter != ' ')&&(caracter != '\t')&&(caracter != '\n')&&(constanteString[0] == '\0')&&(comparador[1] == '\0')) // si comparador[1] no tiene contenido 
            ungetc(caracter, input);
        cleanTokens();
        //printf("Num token es: %d\n", num_token);
                
        // NUMERO DE TOKEN esta entre 256 (primer token) y 292 (ultimo token)
        return num_token;
    }else{
        return -1;  // llego al fin del programa (detecta EOF), no hay mas token para devolver
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int getColumnByEvent(char letra){
    if( isalpha(letra) ) return 0;      // Si es un caracter, devuelve valor 0  
	if( isdigit(letra) ) return 1;      // Si es un digito, devuelve valor 1
	if(letra == '_')    return 2;       // Si es un guion bajo, devuelve valor 2 
	if(letra == '.')    return 3;       // Si es un operador punto, devuelve valor 3  
	if(letra == '"')    return 4;       // Si es un comilla doble, devuelve valor 4 
	if(letra == '>')    return 5;       // Si es operador mayor que, devuelve valor 5 
	if(letra == '<')    return 6;       // Si es operador menor que, devuelve 6
	if(letra == '=')    return 7;       // Si es operador igual, devuelve 7
	if(letra == '/')    return 8;       // Si es barra invertida, devuelve 8
	if(letra == '#')    return 9;       // Si es numeral, devuelve 9
	if(letra == '+')    return 10;      // Si es operador de suma, devuelve 10
	if(letra == '&')    return 11;      // Si es ampersand, devuelve 11
	if(letra == '|')    return 12;      // Si es barra vertical, devuelve 12
	if(letra == '!')    return 13;      // Si es exclamacion, devuelve 13 
	if(letra == '(' )   return 14;      // Si es parentesis que abre, devuelve 14
	if(letra == ')' )   return 15;      // Si es parentesis que cierra, devuelve 15    
	if(letra == '[' )   return 16;      // Si es corchete que abre, devuelve 16
	if(letra == ']' )   return 17;      // Si es corchete que cierra, devuelve 17          
	if(letra == '{' )   return 18;      // Si es llave que abre, devuelve 18
	if(letra == '}' )   return 19;      // Si es llave que cierra, devuelve 19
	if(letra == '-' )   return 20;      // Si es operador resta, devuelve 20
	if(letra == '*' )   return 21;      // Si es operador multiplicacion, devuelve 21
	if(letra == ',' )   return 22;      // Si es una coma, devuelve 22
	if(letra == ';' )   return 23;      // Si es punto y coma, devuelve 23
    if((letra == '%')||(letra == ':')||(letra == '?')||(letra == '$')||(letra == '~')||(letra == '^')||(letra == 64))    return 25;     
    return 24;                          // Si no cumple ninguna condicion, por defecto, retorna 24, es decir, caracter no especificado                                  
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void buildToken(){
    if(estado_segundo == 1){
        token_confirmado = getTokenIdWords();
        showTokens(); show_TS();   // imprimimos los resultados
    }
    if(estado_segundo == 2) {
        token_confirmado = getTokenInt();
        showTokens(); show_TS();   // imprimimos los resultados
    }
    if(estado_segundo == 3) {
        token_confirmado = getTokenReal();
        showTokens(); show_TS();   // imprimimos los resultados
    }
    if(estado_segundo == 4) {
        token_confirmado = getTokenString();
        showTokens();   show_TS();  // imprimimos los resultados
    }
    if(((estado_segundo == 7)&&(comparador[0] != '='))||(estado_segundo == 8)||((estado_segundo >= 11)&&(estado_segundo <= 17))||((estado_segundo >= 24)&&(estado_segundo <= 25))){
        token_confirmado = getTokenOp();  // Token OPERADORES
        showTokens();   show_TS(); // imprimimos los resultados
    }
    if((estado_segundo == 7)&&(comparador[0] == '=')) {  // si comparador tiene un igual significado que se trata de un comparador
        token_confirmado = getTokenComp();  // Token COMPARADORES
        showTokens();   show_TS(); // imprimimos los resultados
    }
    if(((estado_segundo >= 18)&&(estado_segundo <= 23))||((estado_segundo >= 26)&&(estado_segundo<=27))){
        token_confirmado = getTokenOther();  // Token Otros
        showTokens();   show_TS(); // imprimimos los resultados
    }
    if((estado_segundo >= 5)&&(estado_segundo <= 6)){
        token_confirmado = getTokenComp();  // Token COMPARADORES
        showTokens();   show_TS();  // imprimimos los resultados
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void cleanTokens() {
    for(int i=0; i<39;  i++) {
        constanteEntera[i] = '\0'; constanteReal[i] = '\0';
        constanteString[i] = '\0'; IdPalabraReservada[i] = '\0';
        operador[i] = '\0'; comparador[i] = '\0'; otro[i] = '\0';
        token_confirmado.lexema[i] = '\0'; token_confirmado.tipo[i] = '\0'; token_confirmado.valor[i] = '\0';
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Token getTokenInt() {
    struct Token token;
    if( strlen( constanteEntera ) > 0 ) {
        token.number = 259; // guardo numero de token
        strcpy( token.name, "CENT" ); // guardo nombre del token
        strcpy ( token.lexema, "$");
        strcat( token.lexema, constanteEntera);
        strcpy ( token.tipo, "int");
        strcpy( token.valor, constanteEntera);
        token.longitud = 0;
        return token;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Token getTokenReal() {
    struct Token token;
    if( strlen( constanteReal ) > 0 ) {
        token.number = 260; // guardo numero de token
        strcpy( token.name, "CREAL" ); // guardo nombre del token
        strcpy ( token.lexema, "$");
        strcat( token.lexema, constanteReal);
        strcpy ( token.tipo, "real");
        strcpy( token.valor, constanteReal);
        token.longitud = 0;
        return token;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Token getTokenString() {
    struct Token token;
    if( strlen( constanteString ) > 0 ) {
        token.number = 258; // guardo numero de token
        strcpy( token.name, "CSTRING" ); // guardo nombre del token
        strcpy ( token.lexema, "$");
        strcat( token.lexema, constanteString); 
        strcat ( token.lexema, "\"");
        strcpy ( token.tipo, "cstring");
        strcpy( token.valor, constanteString);
        strcat ( token.valor, "\"");
        token.longitud = strlen(constanteString);
        return token;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Token getTokenIdWords() {
    struct Token token;
    strcpy ( token.valor, " ");
    if( strlen( IdPalabraReservada ) > 0 ) {             // Si no esta vacio 
        if( strcmp( IdPalabraReservada , "while" ) == 0) {           // Si palabrasReservada es WHILE
            token.number = 261; // guardo numero de token
            strcpy( token.name, "WHILE" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            return token;
        }
        if( strcmp( IdPalabraReservada , "if" ) == 0) {              // Si palabrasReservada es IF
            token.number = 262; // guardo numero de token   
            strcpy( token.name , "IF" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            return token;
        }
        if( strcmp( IdPalabraReservada , "else" ) == 0) {            // Si palabrasReservada es ELSE
            token.number = 263; // guardo numero de token   
            strcpy( token.name , "ELSE" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            return token;
        }
        if( strcmp( IdPalabraReservada , "declare" ) == 0) {         // Si palabrasReservada es DECLARE
            token.number = 264; // guardo numero de token
            strcpy( token.name , "DECLARE" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            return token;
        }
        if( strcmp( IdPalabraReservada , "enddeclare" ) == 0) {      // Si palabrasReservada es ENDDECLARE
            token.number = 265; // guardo numero de token
            strcpy( token.name , "ENDDECLARE" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            return token;
        }    
        if( strcmp( IdPalabraReservada , "real" ) == 0) {        // Si palabrasReservada es REAL
            token.number = 266; // guardo numero de token
            strcpy( token.name , "REAL" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            strcpy ( token.tipo, "real");
            return token;
        }      
        if( strcmp( IdPalabraReservada , "int" ) == 0) {         // Si palabrasReservada es INT
            token.number = 267; // guardo numero de token
            strcpy( token.name , "INT" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            strcpy ( token.tipo, "int");
            return token;
        } 
        if( strcmp( IdPalabraReservada , "string" ) == 0) {      // Si palabrasReservada es STRING
            token.number = 268; // guardo numero de token
            strcpy( token.name , "STRING" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            strcpy ( token.tipo, "string");
            return token;
        } 
        if( strcmp( IdPalabraReservada , "get" ) == 0) {         // Si palabrasReservada es GET
            token.number = 269; // guardo numero de token
            strcpy( token.name , "GET" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            return token;
        } 
        if( strcmp( IdPalabraReservada , "put" ) == 0) {      // Si palabrasReservada es PUT
            token.number = 270; // guardo numero de token
            strcpy( token.name , "PUT" ); // guardo nombre del token
            strcpy ( token.lexema, " ");
            return token;
        }
        if( strlen( IdPalabraReservada ) > 0 ) {             // Si no esta vacio 
            token.number = 271; // guardo numero de token
            strcpy( token.name, "ID" ); // guardo nombre del token
            strcpy ( token.lexema, "$");
            strcat( token.lexema, IdPalabraReservada); 
            strcpy ( token.tipo, "-");
            strcpy ( token.valor, "-");
            token.longitud = strlen(IdPalabraReservada);
            return token;
        }
    } 
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Token getTokenOp() {
    struct Token token;
    strcpy ( token.valor, " ");
    strcpy ( token.lexema, " ");
    if( strlen(operador) > 0) {         // Si no esta vacio
        if( strcmp( operador , "+" ) == 0) {        // Si operador es +
            token.number = 272; // guardo numero de token
            strcpy( token.name , "SUMA" ); // guardo nombre del token
            return token;
        } 
        if( strcmp( operador , "-" ) == 0) {        // Si operador es -
            token.number = 273; // guardo numero de token
            strcpy( token.name , "RESTA" ); // guardo nombre del token
            return token;
        } 
        if( strcmp( operador , "*" ) == 0) {        // Si operador es *
            token.number = 274; // guardo numero de token
            strcpy( token.name , "MULT" ); // guardo nombre del token
            return token;
        } 
        if( strcmp( operador , "/" ) == 0) {        // Si operador es /
            token.number = 275; // guardo numero de token
            strcpy( token.name , "DIV" ); // guardo nombre del token
            return token;
        } 
        if( strcmp( operador , "=" ) == 0) {        // Si operador es =
            token.number = 276; // guardo numero de token
            strcpy( token.name , "ASIGN" ); // guardo nombre del token
            return token;
        }
        if( strcmp( operador , "++" ) == 0) {       // Si operador es ++
            token.number = 277; // guardo numero de token
            strcpy( token.name , "CONCAT" ); // guardo nombre del token
            return token;
        }
        if( strcmp( operador , "&&" ) == 0) {       // Si operador es &&
            token.number = 278; // guardo numero de token
            strcpy( token.name , "AND" ); // guardo nombre del token
            return token;
        }
        if( strcmp( operador , "||" ) == 0) {       // Si operador es ||
            token.number = 279; // guardo numero de token
            strcpy( token.name , "OR" ); // guardo nombre del token
            return token;
        }
        if( strcmp( operador , "!" ) == 0) {        // Si operador es !
            token.number = 280; // guardo numero de token
            strcpy( token.name , "NOT" ); // guardo nombre del token
            return token;
        }
    } 
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Token getTokenComp(){
    struct Token token;
    strcpy ( token.valor, " ");
    strcpy ( token.lexema, " ");
    if( strlen(comparador) > 0) {           // Si no esta vacio
        if( strcmp( comparador , ">" ) == 0) {         // Si comparador es >
            token.number = 281; // guardo numero de token
            strcpy( token.name , "MAYOR" ); // guardo nombre del token
            return token;
        }
        if( strcmp( comparador , "<" ) == 0) {        // Si comparador es <
            token.number = 282; // guardo numero de token
            strcpy( token.name , "MENOR" ); // guardo nombre del token
            return token;
        }
        if( strcmp( comparador , "<=" ) == 0) {       // Si comparador es <
            token.number = 283; // guardo numero de token
            strcpy( token.name , "MENORIGUAL" ); // guardo nombre del token
            return token;
        }
        if( strcmp( comparador , ">=" ) == 0) {       // Si comparador es >
            token.number = 284; // guardo numero de token
            strcpy( token.name , "MAYORIGUAL" ); // guardo nombre del token
            return token;
        }
        if( strcmp( comparador , "==" ) == 0) {       // Si comparador es ==
            token.number = 285; // guardo numero de token
            strcpy( token.name , "IGUAL" ); // guardo nombre del token
            return token;
        }
        if( strcmp( comparador , "<>" ) == 0) {           // Si comparador es !=
            token.number = 286; // guardo numero de token
            strcpy( token.name , "DISTINTO" ); // guardo nombre del token
            return token;
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Token getTokenOther(){
    struct Token token;
    strcpy ( token.valor, " ");
    strcpy ( token.lexema, " ");
    if( strlen(otro) > 0) {         // Si no esta vacio
        if( strcmp( otro, ";" ) == 0 ) {        // Si otro es ; 
            token.number = 287;      // guardo numero de token
            strcpy( token.name , "PUNTOYC" );  // guardo nombre del token
            return token;
        }
        if( strcmp( otro , "{" ) == 0) {        // Si otro es {
            token.number = 288;      // guardo numero de token
            strcpy( token.name , "LLAVEA" );  // guardo nombre del token
            return token;
        }
        if( strcmp( otro , "}" ) == 0 ) {       // Si otro es }
            token.number = 289;      // guardo numero de token
            strcpy( token.name , "LLAVEC" );  // guardo nombre del token
            return token;
        }
        if( strcmp( otro , "(" ) == 0 ) {       // Si otro es (
            token.number = 290;      // guardo numero de token
            strcpy( token.name , "PARENTA" );  // guardo nombre del token
            return token;
        }
        if( strcmp( otro , ")" ) == 0 ) {       // Si otro es )
            token.number = 291;      // guardo numero de token
            strcpy( token.name , "PARENTC" );  // guardo nombre del token
            return token;
        }
        if( strcmp( otro , "," ) == 0 ) {       // Si otro es ,
            token.number = 292;      // guardo numero de token
            strcpy( token.name , "COMA" );  // guardo nombre del token
            return token;
        }
    }       
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int tabla_estados [28][26] = {
//estado  	letra	digit	    _	    .	    "	    >	    <	    =	    /	    #	    +	    &	    |	    !	    (	    )	    [	    ]	    {	    }	    -	    *	    ,	    ;       /t /     other
/*estado0*/ 	1,      2,	    29,	    29,	    4,	    5,	    6,	    7,	    8,	    29,	    11,	    13,	    15,	    17,	    18,	    19,	    20,	    21,	    22,	    23,	    24,	    25,	    26,	    27,     0,     29,
/*estado1*/ 	1,	    1,	    1,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,
/*estado2*/	    29,	    2,	    28,	    3,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,
/*estado3*/	    29,	    3,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,
/*estado4*/	    4,	    4,	    4,	    4,	    28,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,	    4,      4,      29,      
/*estado5*/ 	28,	    28,	    28,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,     28,     29,     
/*estado6*/ 	28,	    28,	    28,	    29,	    29,	    28,	    29,	    28,	    29,	    29,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,     28,     29,     
/*estado7*/ 	28,	    28,	    28,	    29,	    28,	    29,	    29,	    28,	    29,	    29,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,     28,     29,     
/*estado8*/ 	28,	    28,	    28,   	28,	    28,	    28,	    28,	    28,	    28,	    9,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado9*/	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    10,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,   	9,	    9,	     9,     9,      9,      
/*estado10*/	9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    0,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,	    9,      9,	    9,	     9,     9,      9,      
/*estado11*/	28,	    28,	    28,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    12,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    28,	    29,	    29,	    29,     28,     29,     
/*estado12*/	28,	    29,	    28,	    29,	    28,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,     29,     29,     
/*estado13*/	29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    14,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,     29,     29,     
/*estado14*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    29,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,    	28,	    28,	    28,	    28,     28,     29,     
/*estado15*/    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    16,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,	    29,     28,     29,       
/*estado16*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    29,	    28,	    28,   	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,       
/*estado17*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,            
/*estado18*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado19*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado20*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,   	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado21*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado22*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado23*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado24*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado25*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,     
/*estado26*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,        
/*estado27*/	28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,	    28,     28,     29,               
            }; 
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void(*tabla_funciones[28][26])() = {        // Se omite F14 y F16
//	    letra	digito	_	    .	    "	    >	    <	    =	    /	    #	    +	    &	    |	    !	    (	    )	    [	    ]	    {	    }	    -	    *	    ,	    ;       /t      /n
/*F0*/	F1,	    F2,	    ERROR,	ERROR,	F4,	    F5,	    F6,	    F7,	    F8,	    ERROR,	F11,	F13,	F15,	F17,	F18,	F19,	F20,	F21,	F22,	F23,	F24,	F25,	F26,	F27,    F0,      ERROR,
/*F1*/	F1,	    F1,	    F1,	    F,	    F,   	F,	    F,	    F,	    F,   	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,   	F,	    F,      F,      ERROR,
/*F2*/	ERROR,	F2,	    F,	    F3,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,   	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F3*/	ERROR,	F3,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,   	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F4*/	F4,	    F4,	    F4,	    F4,	    F,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,	    F4,     F4,     ERROR,
/*F5*/	F,	    F,	    F,	    ERROR,	ERROR,	ERROR,	ERROR,	F,	    ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	F,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	    F,	    ERROR,	ERROR,	ERROR,  F,      ERROR,
/*F6*/	F,	    F,	    F,	    ERROR,	ERROR,	F,	    ERROR,	F,	    ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	F,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	    F,	    ERROR,	ERROR,	ERROR,  F,      ERROR,
/*F7*/	F,	    F,	    F,	    ERROR,	F,	    ERROR,	ERROR,	F,	    ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	F,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	    F,	    ERROR,	ERROR,	ERROR,  F,      ERROR,
/*F8*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F9,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,  ERROR,
/*F9*/	F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F10,	F9,	    F9,	    F9,	    F9,   	F9,	    F9,	    F9,	    F9,	    F9,	    F9,   	F9,	    F9,	    F9,  	F9,     F9,     F9,     
/*F10*/	F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F0,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,	    F9,     F9,     F9,
/*F11*/	F,   	F,	    F,	    ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	F12,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	F,	    ERROR,	ERROR,	ERROR,  F,  ERROR,
/*F12*/	F,	    ERROR,	F,	    ERROR,	F,	    ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,  ERROR,  ERROR,
/*F13*/	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	F,	    ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,  ERROR,  ERROR,
/*F14*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    ERROR,	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,    	F,	    F,	    F,	    F,      F,      ERROR,     
/*F15*/	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	F,	    ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,	ERROR,  F,      ERROR,
/*F16*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    ERROR,	F,	    F,   	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,       
/*F17*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F18*/	F,	    F,   	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,   	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,  	F,	    F,	    F,	    F,      F,      ERROR,
/*F19*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F20*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F21*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F22*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F23*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F24*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F25*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F26*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,   	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
/*F27*/	F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,	    F,      F,      ERROR,
        };
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F0() {
    estado_actual = 0; estado_segundo = 0; // reseteamos el automata
    //printf("Espacio, barra ene o barra te\n");
    if(caracter == '\n') {
        position_row++;
        position_col=0;
    }
    cleanTokens();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F1(){  // IDENTIFICADOR, PALABRA RESERVADA
    if(strlen(IdPalabraReservada) < 30){
        IdPalabraReservada[strlen(IdPalabraReservada)] = caracter;   // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter en la posicion 0 para formar una palabra RESERVADA
    } else {
        printf("??Error! Limite de identificador alcanzado en: fila %d, columna %d\n", position_row, position_col);
        hay_error = 1;
    } 
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F2(){  //  DIGITO
    if(strlen(constanteEntera) < 30){
        constanteEntera[strlen(constanteEntera)] = caracter;    // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer digito en la posicion 0
    } else {
        printf("??Error! Limite de int alcanzado en: fila %d, columna %d\n", position_row, position_col);
        hay_error = 1;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F3(){  // REALES
    if(caracter == '.') {
        strcpy(constanteReal, constanteEntera);  // hago una copia de los digitos enteros en los reales
    }
    if(strlen(constanteReal) < 30){
        constanteReal[strlen(constanteReal)] = caracter;    // voy formando el digito de tipo real
    } else {
        printf("??Error! Limite de real alcanzado en: fila %d, columna %d\n", position_row, position_col);
        hay_error = 1;
    } 
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F4(){    // STRING "  "
    if(strlen(constanteString) < 30){
        constanteString[strlen(constanteString)] = caracter;  // voy formando el string 
    } else {
        printf("??Error! Limite de string alcanzado en: fila %d, columna %d\n", position_row, position_col);
        hay_error = 1;
    } 
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F5(){ // COMPARADOR mayor que >
    comparador[strlen(comparador)] = caracter;  // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F6(){ // COMPARADOR menor que <
    comparador[strlen(comparador)] = caracter;  // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F7(){  // OPERADOR Asignacion =
    operador[strlen(operador)] = caracter;   // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter COMPARADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F8(){  // OPERADOR division u OTRO comentario
    operador[strlen(operador)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR (division) en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F9(){  // OTRO Comentario que
     if(caracter == '#') {
        strcpy(otro, operador);  // hago una copia del operador / en otro
    }
    otro[strlen(otro)] = caracter;    // voy formando el token comentario que abre /#  
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F10(){
    otro[strlen(otro)] = caracter;    // # forma parte del contenido de los comentarios
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F11(){     // OPERADOR SUMA +
    operador[strlen(operador)] = caracter; // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F12(){     // OPERADOR CONCATENADOR ++
    // Formo los comentarios, de lo contrario se considera operador division /
    if ((operador[0] == '+') && (caracter == '+')) {     // comparador tiene un solo caracter
         operador[1] = caracter;  // Formo el operador concatenador ++
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F13(){     // OPERADOR AND &
    operador[strlen(operador)] = caracter; // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F15(){     // OPERADOR OR &
    operador[strlen(operador)] = caracter; // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F17(){     // OPERADOR NOT !
    operador[strlen(operador)] = caracter; // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F18(){     // OTRO Parentesis que abre (
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F19(){     // OTRO Parentesis que cierra )
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F20(){     // OTRO Corchete que abre [
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F21(){     // OTRO Corchete que cierra ]
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F22(){     // OTRO Llave que abre {
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F23(){     //OTRO Llave que cierra )
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F24(){     // OPERADOR RESTA -
    operador[strlen(operador)] = caracter;   // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F25(){     // OPERADOR MULTIPLICACION *
    operador[strlen(operador)] = caracter;   // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OPERADOR en la posicion 0
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F26(){     // OTRO coma ,
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F27(){     // OTRO punto y coma ;
    otro[strlen(otro)] = caracter;      // si esta vacio, strlen devuelve 0. es decir, que en la primera pasada guardaria el primer caracter OTRO en la posicion 0
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ERROR(){
    printf("??Error! caracter invalido en: fila %d, columna %d\n", position_row, position_col);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void F(){
    // Formo los comparadores >= (mayor igual), <= (menor igual)
    if (((comparador[0] == '>')||(comparador[0] == '<')) && (caracter == '=')) {     // comparador tiene un solo caracter
        comparador[strlen(comparador)] = caracter;      // guarda en la posicion 1 el caracer = para formar: >= ?? <= 
    }
    // Formo el comparador ==
    if ((operador[0] == '=') && (caracter == '=')) {     // operador tiene un solo caracter
        strcpy(comparador, operador);
        comparador[1] = caracter;
    }else if((operador[0] == '=')&&(caracter != '=')){
        operador[0] = '=';  // Formo el operador asignacion =
    }
    // Formo el comparador <> (distinto)
    if ((comparador[0] == '<') && (caracter == '>')) {     // comparador tiene un solo caracter
        comparador[strlen(comparador)] = caracter;      // formo el operador distinto <>
    }
    // Formo los operadores AND, OR
    if ((strlen(operador) == 1) && ((caracter == '&') || (caracter == '|'))) {     // operador tiene un solo caracter
        operador[strlen(operador)] = caracter;      // guarda en la posicion 1 el caracer = para formar: >= ?? <= ?? == ?? !=
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void showTokens() {
    fprintf (lista_tokens, "%d\t\t%s\n", token_confirmado.number, token_confirmado.name);
    fflush(lista_tokens);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void show_TS() {   
    if((token_confirmado.number == 258)||(token_confirmado.number == 259)||(token_confirmado.number == 260)||(token_confirmado.number == 271)) {  // Si es entero, real, string o id    
        char lexema[40] = {0}; char lexema_temp[40] = {0};
        int imprimir = 1;       // uso esta variable para imprimir en los archivos

        strcpy(lexema_temp, token_confirmado.lexema);
        strcat(lexema_temp, "\n"); // agrego el caracter de fin de linea para poder hacer las comparaciones
        fseek(tokens_unicos, 0, SEEK_SET); // rebobino el cursor de lectura

        while (feof(tokens_unicos) == 0) {
            fgets(lexema , sizeof(token_confirmado.lexema) , tokens_unicos); //por cada cadena leida, obtengo al final un caracter de fin de linea                 
            if(strcmp(lexema, lexema_temp) == 0) {
                imprimir = 0; // para que no imprimo ningun resultado repetido en el archivo
            }
        }
        if(imprimir == 1) {  // si vale 1 ya podemos imprimir los resultados en sus respectivos archivos
            fprintf(tokens_unicos, "%s\n",token_confirmado.lexema);
            fflush(tokens_unicos);    
            fprintf (tabla_simbolos, "%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%d\n", token_confirmado.lexema, token_confirmado.tipo, token_confirmado.valor, token_confirmado.longitud);
            fflush(tabla_simbolos);
            fprintf (tabla_simbolos_orig, "%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%d\n", token_confirmado.lexema, token_confirmado.tipo, token_confirmado.valor, token_confirmado.longitud);
            fflush(tabla_simbolos_orig);
            position_TS++;
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int yyerror(char *s){
    printf("Error de sintaxis en: fila %d, columna %d\n", position_row, position_col);
    fprintf(stderr,"%s\n",s);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void apilar_polaca(char * yval, char * type_yval) {
    int longitud_cad = 0;
    char dato [40] = {0};
    strcpy(dato, yval);
    // Pregunto si yval guarda un operador, sino se considera como digito
    if( strcmp( yval , "S+" ) == 0)       strcpy(dato, "+");
    else if( strcmp( yval , "R-" ) == 0)  strcpy(dato, "-");
    else if( strcmp( yval , "M*" ) == 0)  strcpy(dato, "*");
    else if( strcmp( yval , "D/" ) == 0)  strcpy(dato, "/");
    else if( strcmp( yval , "A=" ) == 0)  strcpy(dato, "=");
   
    longitud_cad = strlen(dato);
    
    printf("****estoy en funcion APILAR POLACA Y yval es: %s****\n",dato);
    //printf("****longitud de yval es: %d****\n",longitud_cad);
    //printf("cantidad_elementos_tira  es: %d\n",cantidad_elementos_tira);

    //borramos todos los caracteres que tengamos en dato e id (ver variable global)
   
    if(repre_intermedia != NULL) {
        indice_tira++;
        fprintf(repre_intermedia, "%d", indice_tira);
        fflush(repre_intermedia);
        fprintf(repre_intermedia, "\t;%s;", dato);
        fflush(repre_intermedia);
        fprintf(repre_intermedia, "\t%s\n", type_yval);
        fflush(repre_intermedia);

        for (int i=0; i<40; i++) {
            dato[i] = '\0';
        }    
    }
    fflush(repre_intermedia);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void aplicar_polaca() {
    int asignar=0;
    indice_tira++;
    asignar = indice_tira;
    char crtt;

    char auxIndice[40]={0};
    char auxCelda[40]={0};
    char auxEtiqueta[40]={0};
    char linea[400] = {0};
    char delimitador[] = "\t";
    int numeroToken = 0;

    //printf("INDICE DE TIRA es %d \n", indice_tira);
    rewind(repre_intermedia);

    tira_polaca = (tira*)malloc(asignar*sizeof(tira));
    if(tira_polaca==NULL){
        printf("No se asign?? memoria correctamente para tira_polaca\n");
    }
    else{
        if (repre_intermedia == NULL) {
            printf("El fichero no se ha podido abrir para lectura.\n");
            exit(1);
        }   
        else {
            for(int i=0; i<asignar; i++){
                fgets(linea, 400, repre_intermedia);
                //printf("Linea es: %s", linea);
                char * token = strtok(linea, delimitador);

                if(token != NULL){
                    while(token != NULL){
                        numeroToken++;
                    
                        if (numeroToken == 1){
                            strcpy(auxIndice, token);
                            strcpy(tira_polaca[i].index, auxIndice);
                            //printf("Token es: %s\n", tira_polaca[i].index);
                        }else if (numeroToken == 2){
                            strcpy(auxCelda, token);
                            strcpy(tira_polaca[i].cell, auxCelda);
                            //printf("Token es: %s\n", tira_polaca[i].cell);
                        }else if (numeroToken == 3){
                            strcpy(auxEtiqueta, token);
                            strcpy(tira_polaca[i].tag, auxEtiqueta);
                            //printf("Token es: %s\n", tira_polaca[i].tag);
                            numeroToken = 0;
                        }
                        token = strtok(NULL, delimitador);
                    }
                    //printf("\n\n");
                }

                // para salir del bucle y evitar duplicados de linea
                if(i == asignar) printf("SALE\n");
            }
        }
    }

    printf("\n * * SE GENERO LA ESTRUCTURA DE TIRA POLACA! * * \n\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////
void aplicar_algoritmo_pilas(){
    printf("\n - - Estoy aplicando algoritmo de pilas. . .  - - \n\n");

    // defino las pilas para if y while
    struct pila pila_while;
    struct pila pila_if;

    // defino los elementos para if y while
    struct elemento elem_while;
    struct elemento elem_if;
    struct elemento elemento_tope_while;
    struct elemento elemento_tope_if;

    // defino los indices de los arreglos: tira if y tira if while
    int position_wh = -1;
    int position_if = -1;

    //string para itoa
    char string_espWhite[40]={0};

    // asignamos espacio para los arreglos: tira if y tira if while. 
    // Vamos a guardar los indices de la tira polaca (ya llena anteriormente)
    tiraIW *tira_wh, *tira_if;
	tira_wh = (tiraIW *)malloc(TAM*sizeof(tiraIW));
    tira_if = (tiraIW *)malloc(TAM*sizeof(tiraIW));

    //auxiliar para pilas
    int aux_z_wh=0;
    int aux_z_if=0;

    // preguntamos si se reservo espacio para las tiras
    if((tira_wh == NULL)||(tira_if == NULL)){
		printf("No se asigno espacio para tira while o tira if\n");
        exit(1);
	}

    // creamos las pilas while e if
    crear(&pila_while);
    crear(&pila_if);
    
    // ************* logica del algoritmo de pilas **********************

    ///////////////////   logica pila while   ///////////////////
    for(int j=0; j<indice_tira; j++) {
        //printf("tag is:%s\n", tira_polaca[j].tag);
        if(strcmp(tira_polaca[j].cell,";WH_I;")==0){
            position_wh++; // primer incremento --> es 0
            //printf("lei el inicio de un while en celda %s +1\n",tira_polaca[j].index);
            int indice_tira_aux = 1 + atoi(tira_polaca[j].index);
            //printf("Indice tiene el valor = %d\n",indice_tira_aux);
            elem_while = tira_wh[position_wh].registro;  // guardamos el elemento registro
            elem_while.dato = indice_tira_aux;
            elem_while.posicion = j;  // guarda la posicion actual
            apilar(&pila_while, elem_while);
        }
        //condicion simple
        else if((j>=3) && (strcmp(tira_polaca[j].tag,"#comparator_while\n")==0) && (strcmp(tira_polaca[j+4].tag,"#comparator_while\n")!=0) && (strcmp(tira_polaca[j+4].tag,"#space\n")!=0) && (strcmp(tira_polaca[j-3].tag,"#asm-comparator\n")!=0)){
            //printf("COMPARATOR WHILE\n");
            position_wh++; // primer incremento --> es 0
            int indice_tira_aux = 2 + atoi(tira_polaca[j].index);
            elem_while = tira_wh[position_wh].registro;  // guardamos el elemento registro
            elem_while.dato = indice_tira_aux;
            elem_while.posicion = j;  // guarda la posicion actual
            apilar(&pila_while, elem_while);
        }
        //AND/OR
        else if((strcmp(tira_polaca[j].tag,"#comparator_while\n")==0) && (strcmp(tira_polaca[j+4].tag,"#comparator_while\n")==0)&&(strcmp(tira_polaca[j+6].cell,";AND;")==0)||(strcmp(tira_polaca[j+6].cell,";OR;")==0)){
            position_wh++; // primer incremento --> es 0
            int indice_tira_aux = 7 + atoi(tira_polaca[j].index);
            elem_while = tira_wh[position_wh].registro;  // guardamos el elemento registro
            elem_while.dato = indice_tira_aux;
            elem_while.posicion = j;  // guarda la posicion actual
            apilar(&pila_while, elem_while);
        }
        //not
        else if((strcmp(tira_polaca[j].tag,"#comparator_while\n")==0) && (strcmp(tira_polaca[j+1].cell,";NOT;")==0)){
            position_wh++; // primer incremento --> es 0
            int indice_tira_aux = 3 + atoi(tira_polaca[j].index);
            elem_while = tira_wh[position_wh].registro;  // guardamos el elemento registro
            elem_while.dato = indice_tira_aux;
            elem_while.posicion = j;  // guarda la posicion actual
            apilar(&pila_while, elem_while);
        }else if(strcmp(tira_polaca[j].cell,";WH_F;")==0){
            //printf("FIN WHILE\n");
            int indice_tira_aux = 1 + atoi(tira_polaca[j].index);
            aux_z_wh= retornar_tope(&pila_while , &elemento_tope_while);
            //printf("aux_z_whi es %d:\n",aux_z_wh);
            desapilar(&pila_while , &elemento_tope_while);
            //EN celda Z, PONGO CELDA ACTUAL+1
            sprintf(string_espWhite,"%d",indice_tira_aux);
            strcpy(tira_polaca[aux_z_wh].cell , ";");
            strcat(tira_polaca[aux_z_wh].cell , string_espWhite);//copiamos en celda aux_z_wh la celda actual+1 
            strcat(tira_polaca[aux_z_wh].cell , ";");
            //printf("celda espacio en blanco, es: %s\n",tira_polaca[aux_z_wh].cell);

            indice_tira_aux =atoi(tira_polaca[j].index)-2;
            //printf("indice_tira_aux, osea celda actual -2 es: %d",indice_tira_aux);
            aux_z_wh= retornar_tope(&pila_while , &elemento_tope_while);
            //printf("aux_z_whi es %d:\n",aux_z_wh);
            desapilar(&pila_while, &elemento_tope_while);
            //PONGO CELDA ACTUAL-2 , PONGO Z
            sprintf(string_espWhite,"%d",aux_z_wh);
            strcpy(tira_polaca[indice_tira_aux].cell , ";");
            strcat(tira_polaca[indice_tira_aux].cell , string_espWhite);
            strcat(tira_polaca[indice_tira_aux].cell , ";");
            //printf("celda espacio en blanco, es: %s\n" , tira_polaca[indice_tira_aux].cell);
        }

    }
    
    int tam = tamano(pila_while);
    printf(" -  Tamanio pila while despues de aplicar el algortimo es: %d  -  \n",tam);
    //mostrar(&pila_while, &elemento_tope_while);

    ///////////////////   logica pila if    ///////////////////
    for(int j=0; j<indice_tira; j++) {
        tam = tamano(pila_if);
        if(strcmp(tira_polaca[j].cell,";IF_I;")==0){
            printf("COMPARATOR IF I\n");
            position_if++; // primer incremento --> es 0
            //printf("lei el inicio de un if en celda %s +1\n",tira_polaca[j].index);
            int indice_tira_aux = 1 + atoi(tira_polaca[j].index);
            printf("\n\nIndice tiene el valor = %d\n",indice_tira_aux);
            elem_if = tira_if[position_if].registro;  // guardamos el elemento registro
            elem_if.dato = indice_tira_aux;
            elem_if.posicion = j;  // guarda la posicion actual
            apilar(&pila_if, elem_if);
        }
        //condicion simple
        else if( (j>=3) && (strcmp(tira_polaca[j].tag,"#comparator_if\n")==0) && (strcmp(tira_polaca[j+4].tag,"#comparator_if\n")!=0) && (strcmp(tira_polaca[j+4].tag,"#space\n")!=0) && (strcmp(tira_polaca[j-3].tag,"#asm-comparator\n")!=0)){ 
            printf("COMPARATOR IF SIMPLE\n");
            position_if++; // primer incremento --> es 0
            int indice_tira_aux = 2 + atoi(tira_polaca[j].index);
            printf("\n\nIndice tiene el valor = %d\n",indice_tira_aux);
            elem_if = tira_if[position_if].registro;  // guardamos el elemento registro
            elem_if.dato = indice_tira_aux;
            elem_if.posicion = j;  // guarda la posicion actual
            apilar(&pila_if, elem_if);
        }
        //AND/OR
        else if((strcmp(tira_polaca[j].tag,"#comparator_if\n")==0) && (strcmp(tira_polaca[j+4].tag,"#comparator_if\n")==0) &&((strcmp(tira_polaca[j+6].cell,";AND;")==0) || (strcmp(tira_polaca[j+6].cell,";OR;")==0)) ){
            printf("COMPARATOR IF AND\n");
            position_if++; // primer incremento --> es 0
            int indice_tira_aux = 7 + atoi(tira_polaca[j].index);
            printf("\n\n\nindice_tira_aux es: %d\n\n\n", indice_tira_aux);
            elem_if = tira_if[position_if].registro;  // guardamos el elemento registro
            elem_if.dato = indice_tira_aux;
            elem_if.posicion = j;  // guarda la posicion actual
            printf("\n\n\nelem_if.dato es: %d\n\n\n", elem_if.dato);
            apilar(&pila_if, elem_if);
            printf("QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ indice tira aux= %d\n", indice_tira_aux);
        }
        //not
        else if((strcmp(tira_polaca[j].tag,"#comparator_if\n")==0) && (strcmp(tira_polaca[j+1].cell,";NOT;")==0)){
            printf("COMPARATOR IF NOT\n");
            position_if++; // primer incremento --> es 0
            int indice_tira_aux = 3 + atoi(tira_polaca[j].index);
            elem_if = tira_if[position_if].registro;  // guardamos el elemento registro
            elem_if.dato = indice_tira_aux;
            elem_if.posicion = j;  // guarda la posicion actual
            apilar(&pila_if, elem_if);
        }
        else if(strcmp(tira_polaca[j].cell,";IF_F;")==0){
            printf("COMPARATOR  FIN IF\n");
            int indice_tira_aux = 1 + atoi(tira_polaca[j].index);
            aux_z_if= retornar_tope(&pila_if , &elemento_tope_if);
            printf("aux_z_if es %d:\n",aux_z_if);
            desapilar(&pila_if , &elemento_tope_if);
            //EN celda Z, PONGO CELDA ACTUAL+1
            sprintf(string_espWhite,"%d",indice_tira_aux);
            strcpy(tira_polaca[aux_z_if].cell , ";");
            strcat(tira_polaca[aux_z_if].cell , string_espWhite);//copiamos en celda aux_z_if la celda actual+1 
            strcat(tira_polaca[aux_z_if].cell , ";");
            //printf("celda aux_z_if %d que estaba en blanco ahora es: %s\n",aux_z_if,tira_polaca[aux_z_if].cell);
        
            indice_tira_aux =  atoi(tira_polaca[j].index) -2;
            //printf("apilo celda indice_tira_aux , es decir:%d\n", indice_tira_aux);
            position_if++;
            elem_if = tira_if[position_if].registro;  // guardamos el elemento registro
            elem_if.dato = indice_tira_aux;
            elem_if.posicion = j;  // guarda la posicion actual
            apilar(&pila_if, elem_if);
        }else if (strcmp(tira_polaca[j].cell,";ELSE_F;")==0){
            printf("FIN ELSE\n");
            int indice_tira_aux = 1 + atoi(tira_polaca[j].index);
            aux_z_if= retornar_tope(&pila_if , &elemento_tope_if);
            //printf("aux_z_if es %d:\n",aux_z_if);
            desapilar(&pila_if , &elemento_tope_if);
            //EN celda Z, PONGO CELDA ACTUAL+1
            sprintf(string_espWhite,"%d",indice_tira_aux);
            strcpy(tira_polaca[aux_z_if].cell , ";");
            strcat(tira_polaca[aux_z_if].cell , string_espWhite);//copiamos en celda aux_z_if la celda actual+1 
            strcat(tira_polaca[aux_z_if].cell , ";");
            //printf("celda aux_z_if %d que estaba en blanco ahora es: %s\n",aux_z_if,tira_polaca[aux_z_if].cell);
            aux_z_if= retornar_tope(&pila_if , &elemento_tope_if);
            //printf("aux_z_if desapilo inicio de condicion inservible y es %d:\n",aux_z_if);
            desapilar(&pila_if , &elemento_tope_if);
        }
        
    }
    tam = tamano(pila_if);
    printf(" -  Tamanio pila if despues de aplicar el algortimo es: %d   -  \n",tam);
    //mostrar(&pila_if, &elemento_tope_if);
    
    printf("\n - - SE APLICO CORRECTAMENTE EL ALGORITMO DE PILAS! - - \n\n");
    printTiraPolaca();
}
///////////////////////////////////////////////////////////////////////////////////////////////
void mostrar_polaca(){
    for(int j=0; j<indice_tira; j++) {
        printf ("%s %s %s\n", tira_polaca[j].index, tira_polaca[j].cell, tira_polaca[j].tag);
    }
     printf("\n * * SE IMPRIMIO LA ESTRUCTURA DE TIRA POLACA CON EL ALGORITMO DE PILAS APLICADO! * * \n\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//    FUNCIONES PARA LAS PILAS   //

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int crear(struct pila *p) {
	p->frente = NULL;
	p->tamano = 0;
	return 1;
}

int apilar(struct pila *p, struct elemento elemento){
	struct elemento *nuevo = (struct elemento *) malloc(sizeof(struct elemento));
	
    if (nuevo == NULL) { 
        return -1; 
    }
	nuevo->dato = elemento.dato;
	nuevo->next = NULL;
	
	nuevo->next = p->frente;
	p->frente = nuevo;
	p->tamano++;
	return 1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int desapilar(struct pila *p, struct elemento *elemento){
	// si la pila esta vacia retornamos -1
	if (estaVacia(*p) ) { return -1; }

	elemento->dato = p->frente->dato;
	p->frente = p->frente->next;
	p->tamano--;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int estaVacia(struct pila p){
	if (p.tamano == 0) { return 1; }
	return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int tamano(struct pila p){
	return p.tamano;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int retornar_tope(struct pila *p, struct elemento *elemento){
    elemento->dato = p->frente->dato;
    //printf("Elemento dato es: %d\n",elemento->dato);
    return elemento->dato;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////7
int mostrar(struct pila *p, struct elemento *elemento){
	struct pila *p_aux;
	p_aux = p;

	int tamanio = p_aux->tamano;
	// si la pila esta vacia retornamos -1
	if (estaVacia(*p_aux) ) { 
        return -1;
    } 
	// sino, mostramos el contenido
    for(int i=0; i<tamanio; i++){
		elemento->dato = p_aux->frente->dato;
        //printf("Elemento dato es: %d\n",elemento->dato);
		if(i!=tamanio-1)
			p_aux->frente = p_aux->frente->next;
    }
    return 1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char * getIdTP(){
    int indice=-1; char * cad_aux;
    char letter; int i,j;
    
    for(j=0; j<40;j++){
        ID_aux_TP[j] = '\0';
    }
    
    int length = strlen(listaIDS);
    //printf("Tengo %d caracteres\n", length);
    
    for(i=length-1; i>=0; i--){
        letter = listaIDS[i];
        //printf("letter is: %c\n", letter);
        indice++;
        ID_aux_TP[indice] = letter;
        listaIDS[i] = '\0';
        if(letter == '$') break;
    }
    //printf("YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYyVALLLLLLLLLLLLLLLLLLLLLLLLLLLLLL es: %ld\n",strlen(ID_aux_TP));
    cad_aux = invertir(ID_aux_TP);
    return cad_aux;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char *invertir(char cadena[]) {
  int longitud = strlen(cadena);
  char temporal;
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
       izquierda++, derecha--) {
    temporal = cadena[izquierda];
    cadena[izquierda] = cadena[derecha];
    cadena[derecha] = temporal;
  }
  return cadena;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mostrar_TSD(){
    
    for(int j=0; j<position_TS; j++) {
        printf ("%s %s %s %s\n", dinamic_TS[j].nombre, dinamic_TS[j].tipo, dinamic_TS[j].valor,dinamic_TS[j].longitud);
    }
    
     printf("\n * * SE IMPRIMIO LA ESTRUCTURA DE LA TABLA DE SIMBOLOS DINAMICA! * * \n\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void llenarTS(){
    //printf("Posicion max TS es: %d\n", position_TS);
    rewind(tabla_simbolos);
      
    char auxNombre[40]={0};

    char auxTipo[40]={0};
    char auxValor[40]={0};
    char auxLongitud[40]={0};

    char linea[400] = {0};
    char delimitador[] = "\t";
    int numeroToken = 0;
    dinamic_TS = (TablaSimbolos*)malloc(position_TS*sizeof(TablaSimbolos));

     if(dinamic_TS==NULL){
        printf("No se asign?? memoria correctamente para dinamic TS\n");
    }else{
        if (tabla_simbolos == NULL) {
            printf("El fichero no se ha podido abrir para lectura.\n");
            exit(1);
        }else{
            for(int i=0; i<position_TS+2; i++){
                fgets(linea, 400, tabla_simbolos);
            
                if(i>=2){
                    //printf("Linea es: %s\n", linea);
                    char * token = strtok(linea, delimitador);

                    if(token != NULL){
                        while(token != NULL){
                            numeroToken++;
                        
                            if (numeroToken == 1){
                                strcpy(auxNombre, token);
                                strcpy(dinamic_TS [i-2].nombre, auxNombre);
                                //printf("Token es: %s\n", dinamic_TS[i-2].nombre);
                            }else if (numeroToken == 2){
                                strcpy(auxTipo, token); 
                                strcpy(dinamic_TS [i-2].tipo, auxTipo);
                                //printf("Token es: %s\n", dinamic_TS[i-2].tipo);
                            }else if (numeroToken == 3){
                                strcpy(auxValor, token);
                                strcpy(dinamic_TS[i-2].valor, auxValor);
                                //printf("Token es: %s\n", dinamic_TS[i].valor);
                            }else if (numeroToken == 4){
                                strcpy(auxLongitud, token);
                                strcpy(dinamic_TS[i-2].longitud, auxLongitud);
                                //printf("Token es: %s\n", dinamic_TS[i].longitud);
                                numeroToken = 0;
                            }
                            token = strtok(NULL, delimitador);
                        }
                        //printf("\n\n");
                    }
                    // para salir del bucle y evitar duplicados de linea
                    if(i == position_TS+1) printf("SALE\n");
                }
                
            }
        }
    }

    printf("\n * * SE GENERO LA ESTRUCTURA DE LA TABLA DE SIMBOLOS DINAMICA! * * \n");
    mostrar_TSD();
    addTypeTS();
    printTS();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char * removeSubString(char str [],int num_tipo){ // quita los tipos de datos (int, real, string) despues de haber aplicado strstr()
    char tmpCad [300];
    int indice=-1;
    for (int i = 0; i < strlen(str)+1; i++) {
        if(i >= num_tipo){
            indice++;
            tmpCad[indice] = str[i];
        }
    }
    strcpy(str, tmpCad);
    return str;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
char * insertSpaWhite(char line []){
    char tmpCad [300];
    printf("La vieja fila es: %s\n", line);
    for(int i=0; i<strlen(line)+1; i++){
        if(i==0){
            tmpCad[i] = ' ';
        }
        if(i>0){
            tmpCad[i] = line[i-1];
        }
    }
    strcpy(line, tmpCad);
    printf("La nueva fila es: %s\n", line);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void actualizarTS(char type[],int num_tipo){
    char linea[300] = {0}; char cadena_aux[300]={0}; char cadena_aux_2[300]={0}; char nuevo_arreglo[300]={0};
    int indice_arreglo=-1;
    char * arreglo_int_aux; char * arreglo_enddec_aux;  char * arreglo_int;
    int i=0, num_linea=0;
    cadena_aux_2[0]='%';
    int foraux=0;
    rewind(input);  // rebobino el fichero al principio
    
    while(1)
    { // se ejecuta hasta encontrar un enddeclare
        fgets(linea, 300, input);  // leemos cada fila del fichero prueba.txt
        arreglo_int = insertSpaWhite(linea);

        printf("Linea de fichero input es: %s\n",linea);
        num_linea++;  // Es un contador de linea. En la primera pasada, vale 1
    
        arreglo_enddec_aux = strstr(linea, "enddeclare");
        arreglo_int_aux = strstr(linea, type);
        printf("Arreglo_enddec_aux : %s\n", arreglo_enddec_aux);

       if(arreglo_int_aux != NULL) {
           while(1)
           {
                printf("el arreglo_int_aux es: %s\n", arreglo_int_aux); // imprime toda la fila, desde int.

                for (i=0 ; i<300 ; i++){  // recorro toda la fila, desde int
                    if( (i>=num_tipo) && (arreglo_int_aux[i] != ';') && (arreglo_int_aux[i] != ' ') && (arreglo_int_aux[i] != '\0') ){  // pregunto por lo que sigue despues de int
                        indice_arreglo++; // primera pasada --> 0
                        printf("\n\n I es: %d\n\n",indice_arreglo);
                        //printf("\narreglo_int_aux[%d]es: %s\n\n\n", i,arreglo_int_aux[i]);
                        cadena_aux[indice_arreglo] = arreglo_int_aux[i]; // desde la posicion que sigue al string int, empiezo a guardar datos
                        printf("letra de cadena_aux es: %c\n", cadena_aux[indice_arreglo]);
                        strcpy(nuevo_arreglo, cadena_aux );
                        printf("\nnuevo_Arreglo es: %s\n\n\n", nuevo_arreglo);
                    }
                    else if( (i>=num_tipo) && (arreglo_int_aux[i] == ';') && (arreglo_int_aux[i] != ' ') && (arreglo_int_aux[i] != '\0') ) {
                        indice_arreglo++;
                        printf("\n\n I es: %d\n\n",indice_arreglo);
                        //printf("\narreglo_int_aux[%d]es: %s\n\n\n", i,arreglo_int_aux);
                        strcat(cadena_aux, ",");
                        printf("letra de cadena_aux es: %c\n\n", cadena_aux[indice_arreglo]);
                        printf("\ncadena_aux es x else: %s\n\n\n", cadena_aux);
                        break;  // sale del bucle for (i=0 ; i<400 ; i++)
                    }
                }
                // para evitar que se omitan otras cadenas
                for(i =0; i<300;i++){
                    if(foraux<300){
                        if (cadena_aux[i]!=','){
                        cadena_aux_2[foraux+1]=cadena_aux[i];
                        foraux++;
                        }
                        if((cadena_aux[i]==',')&&(cadena_aux[i+1]!='\0')){
                            cadena_aux_2[foraux+1]=',';
                            cadena_aux_2[foraux+2]='%';
                            foraux= foraux +2;
                        }         
                    }
                }
                strcat(cadena_aux_2,",");
                printf("--------------------- cadena_aux_2 es: %s\n\n\n", cadena_aux_2);
                foraux=0;

                //printf("arreglo antes es: %s\n", arreglo_int_aux);
                arreglo_int = removeSubString(arreglo_int_aux,num_tipo); // string x,y;        string x;
                strcpy(arreglo_int_aux, arreglo_int);

                //printf("ANTES arreglo_int_aux es: %s\n", arreglo_int_aux);
                arreglo_int_aux = strstr(arreglo_int_aux, type);
                //printf("DESPUES arreglo_int_aux es: %s\n", arreglo_int_aux);
                
                if(arreglo_int_aux == NULL) {
                    break; // sale del primer bucle xq ya detecto el enddeclare, y no necesito leer mas nada
                }
            }
        }
        if(arreglo_enddec_aux != NULL) {
            break; // sale del primer bucle xq ya detecto el enddeclare, y no necesito leer mas nada
        }

    }
     for(i=0;i<position_TS;i++){	       //recorro dinamicTS
        char cadenita [40]= {0};
        cadenita[0]='%';
        
        for(int j=1; j<40; j++){
            cadenita[j] = dinamic_TS[i].nombre[j];
        }
        
        strcat(cadenita,",");
        printf("\n\ncadenita es %s:\n\n",cadenita);
        printf("\n\ny la comparo con cadena_aux que es %s\n\n:",cadena_aux_2);
        if (strstr(cadena_aux_2,cadenita) != NULL){
                strcpy(dinamic_TS[i].tipo, type);
        }
        printf("\n\ndinamic_ts tipo ahora es %s:\n\n",dinamic_TS[i].tipo);
    }

    mostrar_TSD(); 
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void addTypeTS(){ 
    for(int i=1; i<=3;i++){
        switch (i){
            case 1: actualizarTS(" int ",4);
                  break;
            case 2: actualizarTS(" real ",5);
                  break;
            case 3: actualizarTS(" string ",7);
                  break;
        }
    }   
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void printTS(){
    fclose(tabla_simbolos);

    tabla_simbolos = fopen("tabla_simbolos.txt", "w+");
    rewind(tabla_simbolos);

    if(tabla_simbolos != NULL){
        fprintf (tabla_simbolos, "%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\n\n", "NOMBRE", "TIPO", "VALOR", "LONGITUD");
        fflush(tabla_simbolos); 

        for(int j=0;j<position_TS;j++){
            if(strcmp(dinamic_TS[j].tipo,"real")==0||strcmp(dinamic_TS[j].tipo,"real ")==0||strcmp(dinamic_TS[j].tipo,"real\0")==0){
                printf("estoy en if de real\n\n");
                for(int k=0;k<strlen(dinamic_TS[j].nombre);k++){
                    printf("estoy en for de nombre\n\n");
                     printf("nombre[k] es:%c;\n\n",dinamic_TS[j].nombre[k] );
                    if(dinamic_TS[j].nombre[k]=='.'){
                        printf("estoy en punto.\n\n");
                        dinamic_TS[j].nombre[k]='_';
                    }
                }
            }
        }

        for(int i=0;i<position_TS;i++){
            fprintf (tabla_simbolos, "%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s", dinamic_TS[i].nombre, dinamic_TS[i].tipo, dinamic_TS[i].valor, dinamic_TS[i].longitud);
            fflush(tabla_simbolos);
        }
    }  // NO HACE FALTA CERRAR EL ARCHIVO --> se hace en el MAIN()
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void printTiraPolaca(){  // <--- ACA HAY QUE COMPROBAR TIPOS. SE llama en la f() donde se aplica el algoritmo
    fclose(repre_intermedia);     // de pilas
    char id_name_TS[40];
    //char type_TS[40];
    
    repre_intermedia = fopen("intermedia.txt", "w+");
    //rewind(repre_intermedia);

    if(repre_intermedia != NULL){
        for(int i=0;i<position_TS;i++){
            strcpy(id_name_TS, ";");  // para hacer la comparacion de TS con la tira polaca
            strcat(id_name_TS, dinamic_TS[i].nombre);
            strcat(id_name_TS, ";");  // para hacer la comparacion de TS con la tira polaca

            for(int j=0; j<indice_tira; j++) {
                if(strcmp(id_name_TS, tira_polaca[j].cell) == 0){

                    
                    strcpy(tira_polaca[j].tag, "#");
                    for(int z=1;z<=strlen(dinamic_TS[z].tipo)+1;z++){
                        if(z==1){
                        tira_polaca[j].tag[z]=dinamic_TS[i].tipo[z];
                        }else{
                            tira_polaca[j].tag[z]=dinamic_TS[i].tipo[z];
                        }
                    }
                    //strcat(tira_polaca[j].tag, dinamic_TS[i].tipo);
                }
                
            }
        }
        for(int v=0;v<indice_tira;v++){
            if(strcmp(tira_polaca[v].tag,"#stringg\n") == 0){
                    strcpy(tira_polaca[v].tag,"#string\n");
            }
           
            
        }
        // printeo en el archivo
        for(int itp=0; itp<indice_tira; itp++) {
                //tira_polaca[itp].tag[strlen(tira_polaca[itp].tag)-1] = ' ';
                //printf("??????????????????????????????????????????????????????????????????????????????????????????????%s po\n", tira_polaca[itp].tag);
            if(strcmp(tira_polaca[itp-1].tag,"#string ") == 0){
                    fprintf(repre_intermedia, "\n");
                        fflush(repre_intermedia);
            }
            else if(strcmp(tira_polaca[itp-1].tag,"#string") == 0){
                    fprintf(repre_intermedia, "\n");
                    fflush(repre_intermedia);
            }
                
                if((tira_polaca[itp].cell[1] == '$')&&(tira_polaca[itp].tag[1] != 's')) {
                    fprintf(repre_intermedia, "%s\t%s\t%s\n", tira_polaca[itp].index, tira_polaca[itp].cell, tira_polaca[itp].tag);
                    fflush(repre_intermedia);
                    if(strcmp(tira_polaca[itp+1].cell,";GET;")==0){
                        fprintf(repre_intermedia, "\n");
                        fflush(repre_intermedia);
                    }
                }else{
                    fprintf(repre_intermedia, "%s\t%s\t%s", tira_polaca[itp].index, tira_polaca[itp].cell, tira_polaca[itp].tag);
                    fflush(repre_intermedia);
                    if((strcmp(tira_polaca[itp+1].cell,";PUT;")==0)&&(tira_polaca[itp].tag[1]!='s')){
                        fprintf(repre_intermedia, "\n");
                        fflush(repre_intermedia);
                    }
                }
          
        }
    }// NO HACE FALTA CERRAR EL ARCHIVO --> se hace en el MAIN()
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void verificar_tipos(){
    int jaux=0,zaux=0,ultimo_asign=0, primer_asign=0, fin_de_asign=0, inicio_ultimo_asign=0;
    char tipos_aux[30]={0};
    char caux=' ';

    
    for(int j=0; j<indice_tira; j++) {  //para las comparaciones #cstring #string
       
        if(j>=2){
            
            if((tira_polaca[j-1].tag[1]=='c')&&(tira_polaca[j-1].tag[2]=='s')){
                strcpy(tira_polaca[j-1].tag,"#string");
            }
            if((tira_polaca[j-2].tag[1]=='c')&&(tira_polaca[j-2].tag[2]=='s')){
                strcpy(tira_polaca[j-2].tag,"#string");
            } 
       
                
            if(strcmp(tira_polaca[j].cell,";CMP;")==0){
                if((tira_polaca[j-1].tag[1])!=(tira_polaca[j-2].tag[1])){ 
                    printf("error de tipos en %s:\n",tira_polaca[j].index);
                    //system("pause");
                    exit(1);  
                }
            }
            if(strcmp(tira_polaca[j].cell,";++;")==0){  
                if(tira_polaca[j-1].tag[1]!=tira_polaca[j-2].tag[1]){
                    printf("error de tipos en %s:\n",tira_polaca[j].index);
                    //system("pause");
                    exit(1);   
                    }
            }
            if(strcmp(tira_polaca[j].cell,";=;")==0){
                printf("\n\nestoy por entrar a la tira de las ASIGN\n\n");
                if(primer_asign==0){
                    primer_asign=1;
                }
                
                jaux=j;
                while(strcmp(tira_polaca[jaux+2].cell,";=;")==0){
                    jaux = jaux +2;
                    j=jaux;
                    printf("\n\nencontre otro ASIGN en :%d\n\n", jaux);
                }

                // desde jaxu (oomitiendo ;=;) hasta que aparezca 
                //||#space||fin_wh||fin_if||#asm-jump(bi eslef)
                if(primer_asign==1){          //guardo inicio y fin de primera asignacion que aparece
                    int a=jaux;
                    inicio_ultimo_asign=a;
                    for(a;a>=0;a--){     
                        if((strcmp(tira_polaca[a].tag,"#space")==0)||(strcmp(tira_polaca[a].tag,"#space\n")==0)||
                        (strcmp(tira_polaca[a].tag,"#fin_wh")==0)||(strcmp(tira_polaca[a].tag,"#fin_wh\n")==0)||
                        (strcmp(tira_polaca[a].tag,"#fin_if")==0)||(strcmp(tira_polaca[a].tag,"#fin_if\n")==0)||
                        (strcmp(tira_polaca[a].tag,"#asm-jump")==0)|| (strcmp(tira_polaca[a].tag,"#asm-jump\n")==0)||
                        (a==0)){
                            printf("\nprimera asignacion termina en :%d\n", a);
                            fin_de_asign=a;
                            primer_asign=2;
                            break;
                        }                     
                    }       
                }
                else if(primer_asign==2){   //guardo inicio y fin de la siguiente asignacion que aparece
                    int a=jaux;
                    for(a;a>=inicio_ultimo_asign;a--){     
                        if((strcmp(tira_polaca[a].tag,"#space")==0)||(strcmp(tira_polaca[a].tag,"#space\n")==0)||
                        (strcmp(tira_polaca[a].tag,"#fin_wh")==0)||(strcmp(tira_polaca[a].tag,"#fin_wh\n")==0)||
                        (strcmp(tira_polaca[a].tag,"#fin_if")==0)||(strcmp(tira_polaca[a].tag,"#fin_if\n")==0)||
                        (strcmp(tira_polaca[a].tag,"#asm-jump")==0)|| (strcmp(tira_polaca[a].tag,"#asm-jump\n")==0)||
                        (a==inicio_ultimo_asign)){
                            printf("\nsiguiente asignacion termina en :%d\n", a);
                            fin_de_asign=a;
                            break;
                        }                     
                    }
                    inicio_ultimo_asign=jaux;    //seteo el inicio de esta asignacion por si viene otra asignacion
                }
                
                
                printf("\n\n Al entrar al FOR, JAUX=%d, inicio_ultimo_asign=%d y findeasign=%d\n\n",jaux,inicio_ultimo_asign, fin_de_asign);                             
                for(jaux;jaux>=fin_de_asign;jaux--){ 
                    printf("\n\nEstoy en celda %d para comparar tipos en asignacion\n\n", jaux);
                    
                    
                    if((strcmp(tira_polaca[jaux].tag,"#int")==0)||(strcmp(tira_polaca[jaux].tag,"#int ")==0)||(strcmp(tira_polaca[jaux].tag,"#int\0")==0)||(strcmp(tira_polaca[jaux].tag,"#int\n")==0)){
                        printf("tira_polaca[%d].cell: %s, tira_polaca[%d].tag %s\n", jaux,tira_polaca[jaux].cell,jaux,tira_polaca[jaux].tag);
                        tipos_aux[zaux]='r'; //lleno vector auxiliar con i para tipo int
                        zaux++;
                    }
                    if((strcmp(tira_polaca[jaux].tag,"#real")==0)||(strcmp(tira_polaca[jaux].tag,"#real ")==0)||(strcmp(tira_polaca[jaux].tag,"#real\0")==0)||(strcmp(tira_polaca[jaux].tag,"#real\n")==0)){
                        printf("tira_polaca[%d].cell: %s, tira_polaca[%d].tag %s\n", jaux,tira_polaca[jaux].cell,jaux,tira_polaca[jaux].tag);
                        tipos_aux[zaux]='r'; //lleno vector auxiliar con r para tipo real
                        zaux++;
                    }
                    if((strcmp(tira_polaca[jaux].tag,"#string")==0)||(strcmp(tira_polaca[jaux].tag,"#cstring")==0)||(strcmp(tira_polaca[jaux].tag,"#stringg\n")==0)||(strcmp(tira_polaca[jaux].tag,"#string\n")==0)||(strcmp(tira_polaca[jaux].tag,"#cstring\0")==0)||(strcmp(tira_polaca[jaux].tag,"#cstring\n")==0)){
                        printf("tira_polaca[%d].cell: %s, tira_polaca[%d].tag %s\n", jaux,tira_polaca[jaux].cell,jaux,tira_polaca[jaux].tag);
                        printf("es string\n"); 
                        tipos_aux[zaux]='s'; //lleno vector auxiliar con s para tipo string
                        zaux++;
                    } 
                    if((strcmp(tira_polaca[jaux].tag,"#")==0)||strcmp(tira_polaca[jaux].tag,"#")==0){
                        printf("es NO declarada\n"); 
                        tipos_aux[zaux]='x'; //lleno vector auxiliar con x para tipo no declarada
                        zaux++;
                    }
                    if((strcmp(tira_polaca[jaux].tag,"#space")==0)||(strcmp(tira_polaca[jaux].tag,"#space\n")==0)||
                        (strcmp(tira_polaca[jaux].tag,"#fin_wh")==0)||(strcmp(tira_polaca[jaux].tag,"#fin_wh\n")==0)||
                        (strcmp(tira_polaca[jaux].tag,"#fin_if")==0)||(strcmp(tira_polaca[jaux].tag,"#fin_if\n")==0)||
                        (strcmp(tira_polaca[jaux].tag,"#asm-jump")==0)||(strcmp(tira_polaca[jaux].tag,"#asm-jump\n")==0)){
                            printf("\nentre en el break en :%d\n", jaux); //si encuentro algo de esto, finalize el guardado de tipos de asignacion que inicio en jaux
                            break;
                    }
                    
                }  
                printf("\n\n TIPOS AUX, ES: %s\n\n",tipos_aux); 
                caux=tipos_aux[0];
                for(jaux=1;jaux<strlen(tipos_aux);jaux++){
                    printf("\nestoy comparando VECTOR TIPOS_AUX\n");
                    if(caux!=tipos_aux[jaux]){
                    printf("error de tipos en %s:\n",tira_polaca[j].index);  //si el vector no contiene letras de un solo tipo, hay error de tipos
                    //system("pause");
                    exit(1);
                    }   
                }
                for(int k=0;k<30;k++){
                    tipos_aux[k]='\0';
                }
                zaux=0;     
            }
        }
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void generarAssembler(){
    char auxiliarN[30]={0};  // auxiliar que guarda el nombre de TS
    char auxiliarN2[30]={0};    // auxiliar para nombre en .data constantes string "cadena" --> $_cadena
    char auxiliarT[3]={0};   // auxiliar que guarda el tipo de TS
    char auxiliarV[40]={0};  // auxiliar que guarda el valor de TS
    char auxiliarCV[30]={0};  // auxiliar que representa los valores de la celda de Tira Polaca
    char auxiliarCI[30]={0};  // auxiliar que representa los ids de la celda de Tira Polaca
    char auxiliarORWH[30]={0}; // auxiliar para marcar inicio de cuerpo de while, en condicion OR de while
    int  auxiliarPosAMult = 0; // auxiliar posicion de donde se encuentra el ultimo id la asignacion multiple
    int flagmult = 0; // bandera para obtener la posicion del ultimo id de asignacion multiple ya que lee desde el ultimo al primer id de la asignacion multiple
    int data1=0;
    int auxI=0;
    int auxConc=0;
    int auxStrMul=0;

    // variables para if anidados
    char * aux_cell; 
    char comp_cell[40];
    char f_else_cell[40];
    char f_if_cell[40];
    char f_wh_cell[40];
    int indice_cell_aux;

    fprintf (final_asm, "include macros2.asm\n");
    fflush(final_asm);
    fprintf (final_asm, "include number.asm\n\n");
    fflush(final_asm);

    fprintf (final_asm, ".MODEL LARGE\n");
    fflush(final_asm);
    fprintf (final_asm, ".386\n");
    fflush(final_asm);
    fprintf (final_asm, ".STACK 200h\n");
    fflush(final_asm); 
    fprintf (final_asm, ".DATA\n");
    fflush(final_asm); 
    fprintf (final_asm, "MAXTEXTSIZE equ 50\n\n");
    fflush(final_asm); 

    //.DATA
    for(int i=0;i<position_TS;i++)
    {
        //para sacar comillas de nombre de var cstring
        if(dinamic_TS[i].nombre[1]=='"'){  
            auxiliarN[0]='$';
            for(int j=2;j<strlen(dinamic_TS[i].nombre)-1;j++){
                auxiliarN[j-1]=dinamic_TS[i].nombre[j];                
            }
        }else{
            strcpy(auxiliarN,dinamic_TS[i].nombre);
        }

        //para int y real
        if((strstr(dinamic_TS[i].tipo,"int") != NULL) || (strstr(dinamic_TS[i].tipo,"real")!= NULL)){
            strcpy(auxiliarT,"dd");
            if (strcmp(dinamic_TS[i].valor,"-")==0){
                strcpy(auxiliarV,"?");
            }else if(strcmp(dinamic_TS[i].valor,"-")!=0){
                strcpy(auxiliarV,dinamic_TS[i].valor);
                if(strstr(dinamic_TS[i].tipo,"int")!=NULL){
                    strcat(auxiliarV,".00");
                }
            }
        }
        //para string y cstring
        else if(strstr(dinamic_TS[i].tipo,"string") != NULL ){
            strcpy(auxiliarT,"db");
            if (strcmp(dinamic_TS[i].valor,"-")==0){
                strcpy(auxiliarV,"0Dh, 0Ah, MAXTEXTSIZE dup (?),'$'");
            }else if(strcmp(dinamic_TS[i].valor,"-")!=0){
                strcpy(auxiliarV,dinamic_TS[i].valor);
                auxiliarV[strlen(dinamic_TS[i].valor)-1]='$'; 
                auxiliarV[strlen(dinamic_TS[i].valor)]='"';
                auxiliarN2[0]='$';
                auxiliarN2[1]='_';
                for(int p=1;p<strlen(auxiliarN);p++){
                    auxiliarN2[p+1]=auxiliarN[p];  // $_cadena  $cadena
                }
                strcpy(auxiliarN, auxiliarN2);          
            }
        }
        
        fprintf(final_asm,"%s %s %s\n",auxiliarN,auxiliarT,auxiliarV);
        fflush(final_asm);
        
        //limpio vectores
        for(int k=0;k<30;k++){
            auxiliarN[k]='\0'; // se usa en Ts
            auxiliarCV[k]='\0'; // se usa en TP
            auxiliarCI[k]='\0'; // se usa en TP
            auxiliarN2[k]='\0'; // se usa en TP
        }
        //limpio vectores
        for(int k=0;k<40;k++){
            auxiliarV[k]='\0'; // se usa en TS
        }
    }

    fprintf (final_asm, "$_aux1 db 0Dh, 0Ah, MAXTEXTSIZE dup (?),'$'");
    fflush(final_asm); 

    // Variables para numeros NEGATIVOS
    fprintf (final_asm, "\n_200m dd 2.00\n");
    fflush(final_asm);
    fprintf (final_asm, "_300m dd 3.00\n");
    fflush(final_asm);
    fprintf (final_asm, "_100m dd ?\n");
    fflush(final_asm);

    //ZONA CODIGO PRINCIPAL DE ASM
    fprintf (final_asm, "\n");
    fflush(final_asm);
    fprintf (final_asm, ".CODE\n");
    fflush(final_asm);
   
    //agregado de concat.txt
    while ( (data1 = fgetc (concat)) != EOF ) {
        fputc ( data1, final_asm );
        fflush(final_asm);
    }
    
    fprintf (final_asm, "\n\n");
    fflush(final_asm);

    fprintf (final_asm, "START:\n");
    fflush(final_asm);
    
    //codigo principal
    fprintf (final_asm, "mov AX,@DATA\n");
    fflush(final_asm);
    fprintf (final_asm, "mov DS,AX\n");
    fflush(final_asm); 
    fprintf (final_asm, "mov es,ax\n\n");
    fflush(final_asm); 

    // zona recorrido de la tira polaca para completar la seccion .CODE
    for(int j=0; j<indice_tira; j++) 
    {            
        // Asignaciones fuera del IF y WHILE
        if(strcmp(tira_polaca[j].cell, ";=;") == 0){  
            if(strcmp(tira_polaca[j-2].cell,";++;")==0){
                       /*mov si,OFFSET cad1 ; apunta el origen a la primer cadena
                        mov di,OFFSET aux1 ; apunta el destino a la variable auxiliar
                        call COPIAR ; realiza la copia.
                        
                        mov si,OFFSET cad2 ; apunta el origen a la segunda cadena
                        mov di,OFFSET aux1 ; apunta el destino a la variable auxiliar
                        call CONCAT ; concatena la segunda cadena al auxiliar
                       
                        mov si,OFFSET aux1 ; apunta el origen al auxiliar
                        mov di,OFFSET cad3 ;apunta el destino a la cadena 3
                        call COPIAR ; copia los strings*/
                        strcpy(auxiliarCV, tira_polaca[j-4].cell);
                        if(tira_polaca[j-4].cell[1]=='"'){
                            fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                        else {
                            fprintf (final_asm, "mov si,OFFSET $%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                        fprintf (final_asm, "mov di,OFFSET $_aux1\n");
                        fflush(final_asm);
                        fprintf (final_asm, "call COPIAR\n");
                        fflush(final_asm);

                        strcpy(auxiliarCV, tira_polaca[j-3].cell);
                        if(tira_polaca[j-3].cell[1]=='"'){
                            fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                        else{
                            fprintf (final_asm, "mov si,OFFSET $%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                        fprintf (final_asm, "mov di,OFFSET $_aux1\n");
                        fflush(final_asm);
                        fprintf (final_asm, "call CONCAT\n");
                        fflush(final_asm);

                        fprintf (final_asm, "mov si,OFFSET $_aux1\n");
                        fflush(final_asm);
                        strcpy(auxiliarCI, tira_polaca[j-1].cell);
                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                        fflush(final_asm);
                        fprintf (final_asm, "call COPIAR\n");
                        fflush(final_asm);
                        auxConc=j;
                        while(strcmp(tira_polaca[auxConc+2].cell,";=;")==0){
                            if((tira_polaca[auxConc+1].tag[1] == 's') && (strcmp(tira_polaca[auxConc+2].cell, ";=;")==0)){ // si es string
                                    strcpy(auxiliarCV, tira_polaca[auxConc-1].cell);
                                    if(tira_polaca[auxConc-1].cell[1]=='"'){     
                                        fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                        fflush(final_asm);
                                    }
                                    else{
                                        fprintf (final_asm, "mov si,OFFSET $%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                        fflush(final_asm);
                                    }
                                        strcpy(auxiliarCI, tira_polaca[auxConc+1].cell);
                                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                                        fflush(final_asm);
                                        fprintf (final_asm, "call COPIAR\n");
                                        fflush(final_asm);
                                    }
                                    else if((tira_polaca[auxConc-1].tag[1] == 'c')&& (strcmp(tira_polaca[auxiliarPosAMult].tag, "#operator\n")==0) && (strcmp(tira_polaca[auxiliarPosAMult+2].cell, ";=;")==0)){  // si es cstring
                                        strcpy(auxiliarCV, tira_polaca[auxConc-1].cell);
                                        fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                        fflush(final_asm);
                                       
                                        strcpy(auxiliarCI, tira_polaca[auxConc+1].cell);
                                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                                        fflush(final_asm);
                                        fprintf (final_asm, "call COPIAR\n");
                                        fflush(final_asm);
                                    }
                                    auxConc= auxConc+2;

                        }

                        
                       
            }
            else if(strcmp(tira_polaca[j+2].cell, ";=;") != 0){  
                // si en la posicion actual + 2 posiciones NO encuentra un operador =
                // pregunta si se trata de la asignacion mas simple, es decir, donde a una variable se le asigna una cte o un id
                if(strcmp(tira_polaca[j-2].tag, "#operator\n") != 0)
                { // pregunta si no hay un 'operator' en 2 posiciones mas abajo de la actual
                    //entonces al tratarse de la asignacion mas simple de todas, averiguo que tipo de dato es
                    if(tira_polaca[j-2].tag[1] == 'i'){  //si es entero
                        if(tira_polaca[j-2].cell[1] == '-') {
                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                            fflush(final_asm);
                            strcpy(auxiliarCV, tira_polaca[j-2].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                            fflush(final_asm);
                            strcpy(auxiliarCI, tira_polaca[j-1].cell); // guarda el id de la celda ;$id;
                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(skipPesosC(skipPointsC(auxiliarCI)))); // en posicion actual -1 siempre encuentra el id que almacena lo del lado derecha
                            fflush(final_asm);
                        }else{
                            strcpy(auxiliarCV, tira_polaca[j-2].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                            strcpy(auxiliarCI, tira_polaca[j-1].cell); // guarda el id de la celda ;$id;
                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(skipPesosC(skipPointsC(auxiliarCI)))); // en posicion actual -1 siempre encuentra el id que almacena lo del lado derecha
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-2].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-2].cell[1] == '-') {
                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                            fflush(final_asm);
                            strcpy(auxiliarCV, tira_polaca[j-2].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                            fflush(final_asm);
                            strcpy(auxiliarCI, tira_polaca[j-1].cell); // guarda el id de la celda ;$id;
                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(skipPesosC(skipPointsC(auxiliarCI)))); // en posicion actual -1 siempre encuentra el id que almacena lo del lado derecha
                            fflush(final_asm);
                        }else{
                            strcpy(auxiliarCV, tira_polaca[j-2].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                            strcpy(auxiliarCI, tira_polaca[j-1].cell); // guarda el id de la celda ;$id;
                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(skipPesosC(skipPointsC(auxiliarCI)))); // en posicion actual -1 siempre encuentra el id que almacena lo del lado derecha
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-2].tag[1] == 's'){ // si es string
                        strcpy(auxiliarCV, tira_polaca[j-2].cell);
                        if(tira_polaca[j-2].cell[1]=='"'){     
                            fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                        else{
                            fprintf (final_asm, "mov si,OFFSET $%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                        strcpy(auxiliarCI, tira_polaca[j-1].cell);
                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                        fflush(final_asm);
                        fprintf (final_asm, "call COPIAR\n");
                        fflush(final_asm);
                    
                    }else if(tira_polaca[j-2].tag[1] == 'c'){  // si es cstring
                        strcpy(auxiliarCV, tira_polaca[j-2].cell);
                        //if(tira_polaca[j-2].cell[1]=='"'){
                            
                            fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        //}
                       // else{
                            //fprintf (final_asm, "mov si,OFFSET $%s\n", skipPesosC(skipPointsC(auxiliarCV)));
                            //fflush(final_asm);
                       // }
                        strcpy(auxiliarCI, tira_polaca[j-1].cell);
                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                        fflush(final_asm);
                        fprintf (final_asm, "call COPIAR\n");
                        fflush(final_asm);  
                    }
                }
                else if(strcmp(tira_polaca[j-2].cell, ";=;") != 0) // para que NO se filtre el ultimo = de asignacion multiple
                { // es una asignacion simple, pero con expresion del lado derecho
                    printf("\n");
                    
                    fflush(final_asm);
                    for(int paes=j-1; paes>=0; paes--){  // pams = posicion asignacion expresion simple. se recorre solo dos posiciones
                        if((strcmp(tira_polaca[paes].cell,";IF_I;")!=0)&&
                        (strcmp(tira_polaca[paes].cell,";IF_F;")!=0)&&
                        (strcmp(tira_polaca[paes].cell,";WH_I;")!=0)&&
                        (strcmp(tira_polaca[paes].cell,";WH_F;")!=0)&&
                        (strcmp(tira_polaca[paes].cell,";ELSE_F;")!=0)&&
                        (strcmp(tira_polaca[paes].cell,";PUT;")!=0)&&
                        (strcmp(tira_polaca[paes].cell,";GET;")!=0)&&
                        (strcmp(tira_polaca[paes].cell,";=;")!=0)&&
                        (strcmp(tira_polaca[paes].tag,"#space\n")!=0))     
                        {
                            printf("Estoy en asignacion simple con expresion, pasa por el indice: %s\n", tira_polaca[paes].index);
                            
                        }else{
                            auxI = paes + 1 ;
                            break;
                        }
                        
                    
                            printf("paes es: %d\n", paes);
                            
                            //printf("\n\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<auxI :%i\n\n\n",auxI);
                            //printf("\n\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<j-2 :%i\n\n\n",(j-2));
                            for(auxI;auxI<=j-2;auxI++){
                                
                                printf("\n\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<estoy en for de expresion\n\n");
                                printf("tira_polaca[auxI].tag %s\n\n",tira_polaca[auxI].tag);
                                
                                if(strcmp(tira_polaca[auxI].tag,"#operator\n")!=0){
                                    if(tira_polaca[auxI].cell[1] == '-') {
                                        if(tira_polaca[auxI].tag[1] == 'r'){ // si es real
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[auxI].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);
                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 

                                            strcpy(auxiliarCV, tira_polaca[auxI].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);

                                        }else if(tira_polaca[auxI].tag[1] == 'i'){
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[auxI].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);
                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            strcpy(auxiliarCV, tira_polaca[auxI].cell);
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                        }
                                    }else{
                                        //apilo
                                        if(tira_polaca_copia[auxI].tag[1] == 'r'){ // si es real
                                            strcpy(auxiliarCV, tira_polaca_copia[auxI].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);
                                        }else if(tira_polaca_copia[auxI].tag[1] == 'i'){
                                            strcpy(auxiliarCV, tira_polaca_copia[auxI].cell);
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                        }
                                    }                         
                                }
                                
                                if((strcmp(tira_polaca[auxI].cell, ";+;") == 0)||(strcmp(tira_polaca[auxI].cell, ";/;") == 0)||(strcmp(tira_polaca[auxI].cell, ";-;") == 0)||(strcmp(tira_polaca[auxI].cell, ";*;") == 0)){
                                    
                                    printf("!!!!!!!!!!!!!!!!!!!! entre a if de operadores \n\n");
                                    
                                    // Suma
                                    if(strcmp(tira_polaca[auxI].cell, ";+;") == 0){
                                        //printf("encontre suma\n\n");  
                                        fprintf (final_asm, "fadd\n");
                                        fflush(final_asm);
                                        //printf("operador suma en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Suma *
                                    
                                    // Resta
                                    if(strcmp(tira_polaca[auxI].cell, ";-;") == 0){
                                        //printf("encontre resta\n\n");  
                                        fprintf (final_asm, "fsub\n");
                                        fflush(final_asm);
                                        //printf("operador resta en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Resta *
                                    
                                    // Multiplicacion
                                    if(strcmp(tira_polaca[auxI].cell, ";*;") == 0){
                                        //printf("encontre multiplicacion\n\n");  
                                        fprintf (final_asm, "fmul\n");
                                        fflush(final_asm);//printf("operador mult en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Multiplicacion *
                                    
                                    // Division
                                    if(strcmp(tira_polaca[auxI].cell, ";/;") == 0){
                                        //printf("encontre division\n\n");          
                                        fprintf (final_asm, "fdiv\n");
                                        fflush(final_asm);
                                        
                                        //printf("operador div en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Division *
                                    //desapilo con ultimos 2 valores
                                }
  
                            }
                            strcpy(auxiliarCV, tira_polaca[j-1].cell); 
                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                            fprintf (final_asm, "ffree st(1)\n");
                            fflush(final_asm);
                            break; //salgo del bucle for ya que forme la expresion simple
                        
                    }
                    printf("\n\n");
                }
                // Termina de encontrar la Asignacion Multiple
                else if(strcmp(tira_polaca[j-2].cell, ";=;") == 0){ // cuerpo inicio asignacion multiple
                    printf("Asignacion multiple empieza desde el indice: %s %d\n", tira_polaca[j].index, j);
                    int paem=auxiliarPosAMult;
                    for(paem; paem>=0; paem--){  // pams = posicion asignacion expresion multiple. se recorre solo dos posiciones
                        if((strcmp(tira_polaca[paem].cell,";IF_I;")!=0)&&
                        (strcmp(tira_polaca[paem].cell,";IF_F;")!=0)&&
                        (strcmp(tira_polaca[paem].cell,";WH_I;")!=0)&&
                        (strcmp(tira_polaca[paem].cell,";WH_F;")!=0)&&
                        (strcmp(tira_polaca[paem].cell,";ELSE_F;")!=0)&&
                        (strcmp(tira_polaca[paem].cell,";=;")!=0)&&
                        (strcmp(tira_polaca[paem].cell,";PUT;")!=0)&&
                        (strcmp(tira_polaca[paem].cell,";GET;")!=0)&&
                        (strcmp(tira_polaca[paem].tag,"#space\n")!=0))
                        {
                            printf("Estoy en asignacion multiple con expresion, pasa por el indice: %s\n", tira_polaca[paem].index);
                        }else{
                            int auxiliarMt = paem+1; // guarda la posicion donde termina la expresion
                            printf("La expresion termina en: %d\n", auxiliarMt);
                            
                            // bucle for que resuelve la expresion de la asignacion multiple
                            for(auxiliarMt; auxiliarMt<= auxiliarPosAMult-1; auxiliarMt++){
            
                                if(strcmp(tira_polaca[auxiliarMt].tag,"#operator\n")!=0){ // si es distinto a operator, es decir a: +, -,*,/,=,etc
                                    //apilo
                                    if(tira_polaca[auxiliarMt].tag[1] == 'r'){ // si es real

                                        if(tira_polaca[auxiliarMt].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[auxiliarMt].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                                        }else{
                                            strcpy(auxiliarCV, tira_polaca[auxiliarMt].cell);
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);
                                        }

                                    }else if(tira_polaca[auxiliarMt].tag[1] == 'i'){ // si es entero
                                        
                                        if(tira_polaca[auxiliarMt].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[auxiliarMt].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                                        }else{
                                            strcpy(auxiliarCV, tira_polaca[auxiliarMt].cell);
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                        }
                                    }else if(tira_polaca[auxiliarMt].tag[1] == 's'){ // si es string
                                        strcpy(auxiliarCV, tira_polaca[auxiliarMt].cell);
                                        if(tira_polaca[auxiliarMt].cell[1]=='"'){     
                                            fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                        }
                                        else{
                                            fprintf (final_asm, "mov si,OFFSET $%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                        }
                                        strcpy(auxiliarCI, tira_polaca[auxiliarMt+1].cell);
                                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                                        fflush(final_asm);
                                        fprintf (final_asm, "call COPIAR\n");
                                        fflush(final_asm);
                                    }
                                    else if(tira_polaca[auxiliarMt].tag[1] == 'c'){  // si es cstring
                                        strcpy(auxiliarCV, tira_polaca[auxiliarMt].cell);
                                        fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                        fflush(final_asm);
                                       
                                        strcpy(auxiliarCI, tira_polaca[auxiliarMt+1].cell);
                                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                                        fflush(final_asm);
                                        fprintf (final_asm, "call COPIAR\n");
                                        fflush(final_asm);
                                    }
                                                      
                                }
                                // Si es operador de +,-,*,/
                                if((strcmp(tira_polaca[auxiliarMt].cell, ";+;") == 0)||(strcmp(tira_polaca[auxiliarMt].cell, ";/;") == 0)||(strcmp(tira_polaca[auxiliarMt].cell, ";-;") == 0)||(strcmp(tira_polaca[auxiliarMt].cell, ";*;") == 0))
                                { // operadores
                                    printf("Estoy en el if de operadores en asignacion multiple \n\n");
                                    
                                    // Suma
                                    if(strcmp(tira_polaca[auxiliarMt].cell, ";+;") == 0){
                                        //printf("encontre suma\n\n");  
                                        fprintf (final_asm, "fadd\n");
                                        fflush(final_asm);
                                        //printf("operador suma en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Suma *
                                    
                                    // Resta
                                    if(strcmp(tira_polaca[auxiliarMt].cell, ";-;") == 0){
                                        //printf("encontre resta\n\n");  
                                        fprintf (final_asm, "fsub\n");
                                        fflush(final_asm);
                                        //printf("operador resta en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Resta *
                                    
                                    // Multiplicacion
                                    if(strcmp(tira_polaca[auxiliarMt].cell, ";*;") == 0){
                                        //printf("encontre multiplicacion\n\n");  
                                        fprintf (final_asm, "fmul\n");
                                        fflush(final_asm);//printf("operador mult en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Multiplicacion *
                                    
                                    // Division
                                    if(strcmp(tira_polaca[auxiliarMt].cell, ";/;") == 0){
                                        //printf("encontre division\n\n");          
                                        fprintf (final_asm, "fdiv\n");
                                        fflush(final_asm);
                                        //printf("operador div en el indice: %s\n", tira_polaca[j].index);
                                    }  //  * Fin Division *
                                    //desapilo con ultimos 2 valores
                                    fprintf (final_asm, "ffree st(1)\n");
                                    fflush(final_asm);
                                }

                            } // * * FIN del bucle for que resuelve la expresion de la asignacion multiple

                             // bucle for que resuelve los ids de la asignacion multiple
                            for(auxiliarPosAMult; auxiliarPosAMult<= j; auxiliarPosAMult++){
                                //printf("Estoy resolviendo los ids en el indice: %d\n",auxiliarPosAMult );
 
                                if((strcmp(tira_polaca[auxiliarPosAMult].tag, "#operator\n") == 0)&& ( (tira_polaca[auxiliarPosAMult-1].tag[1]=='i') || (tira_polaca[auxiliarPosAMult-1].tag[1]=='r') )){
                                    strcpy(auxiliarCI, tira_polaca[auxiliarPosAMult-1].cell); // guarda el id de la celda ;$id;
                                    fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(skipPesosC(skipPointsC(auxiliarCI)))); // en posicion actual -1 siempre encuentra el id que almacena lo del lado derecho
                                    fflush(final_asm);
                                    fprintf (final_asm, "fld\t\t$%s\n", skipMenosOP(skipPesosC(skipPointsC(auxiliarCI)))); // en posicion actual -1 siempre encuentra el id que almacena lo del lado derecho
                                    fflush(final_asm);
                                }
                                else if((strcmp(tira_polaca[auxiliarPosAMult].tag, "#operator\n") == 0)&&(tira_polaca[auxiliarPosAMult-1].tag[1] == 's') && (strcmp(tira_polaca[auxiliarPosAMult+2].cell, ";=;")==0)){ // si es string
                                        strcpy(auxiliarCV, tira_polaca[auxiliarPosAMult-1].cell);
                                        if(tira_polaca[auxiliarPosAMult-1].cell[1]=='"'){     
                                            fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                        }
                                        else{
                                            fprintf (final_asm, "mov si,OFFSET $%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                        }
                                        strcpy(auxiliarCI, tira_polaca[auxiliarPosAMult+1].cell);
                                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                                        fflush(final_asm);
                                        fprintf (final_asm, "call COPIAR\n");
                                        fflush(final_asm);
                                    }
                                    else if((tira_polaca[auxiliarPosAMult-1].tag[1] == 'c')&& (strcmp(tira_polaca[auxiliarPosAMult].tag, "#operator\n")==0) && (strcmp(tira_polaca[auxiliarPosAMult+2].cell, ";=;")==0)){  // si es cstring
                                        strcpy(auxiliarCV, tira_polaca[auxiliarPosAMult-1].cell);
                                        fprintf (final_asm, "mov si,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                                        fflush(final_asm);
                                       
                                        strcpy(auxiliarCI, tira_polaca[auxiliarPosAMult+1].cell);
                                        fprintf (final_asm, "mov di,OFFSET %s\n", skipPointsC(auxiliarCI));
                                        fflush(final_asm);
                                        fprintf (final_asm, "call COPIAR\n");
                                        fflush(final_asm);
                                    }
                            }
                            
                            fprintf (final_asm, "ffree st(1)\nffree st(0)\n");
                            fflush(final_asm);
                            break; //salgo del bucle for ya que forme la asignacion multiple
                        }
                    }
                    printf("\n\n");
                    flagmult=0;
                }
            }
            else if(flagmult == 0){ // es una asignacion multiple. prendo el flag
                flagmult = 1;
                auxiliarPosAMult = j-1;
                printf("se activo el flag, posicion ultimo id asignacion multiple: %d\n",auxiliarPosAMult);
            }
            
        }
         //  * Fin Asignaciones *


        ///////////////////////////////////////////////////////////////////////////////////////////
        // I  F
        ////////////
        if(strcmp(tira_polaca[j].cell, ";IF_I;") == 0)
        {    
            strcpy(comp_cell, tira_polaca_copia[j].cell);
            printf("comp_cell es: %s\n", comp_cell);

            aux_cell = strtok(tira_polaca_copia[j].cell, ";IF_I"); // obtengo el numero de if
            //  para los fin de else
            strcpy(f_else_cell, ";ELSE_F");
            strcat(f_else_cell, aux_cell);
            strcat(f_else_cell, ";"); //  guarda ;ELSE_F1;
            printf("f_else_cell es: %s\n", f_else_cell);
            
            // para los fin de if
            strcpy(f_if_cell, ";IF_F");
            strcat(f_if_cell, aux_cell);
            strcat(f_if_cell, ";"); //  guarda x ejemplo --> ;IF_F1;
            printf("f_if_cell es: %s\n",f_if_cell);
            
            
            if(strcmp(tira_polaca[j+7].cell, ";CMP;") != 0)
            {
             //////////////////////////////////////////////////////////copio operandos 
                if(tira_polaca[j+1].tag[1] == 'r'){ // si es real    
                    if(tira_polaca[j+1].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+1].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }else{
                        strcpy(auxiliarCV, tira_polaca[j+1].cell); // guarda el valor de la celda ;value;
                        fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                        fflush(final_asm);
                    }
                      
                }else if(tira_polaca[j+1].tag[1] == 'i'){
                    if(tira_polaca[j+1].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+1].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }
                    else{
                        strcpy(auxiliarCV, tira_polaca[j+1].cell);
                        fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                        fflush(final_asm);
                    }
                }

                if(tira_polaca[j+2].tag[1] == 'r'){ // si es real

                    if(tira_polaca[j+2].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+2].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }
                    else{
                        strcpy(auxiliarCV, tira_polaca[j+2].cell); // guarda el valor de la celda ;value;
                        fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                        fflush(final_asm);
                    }
                }else if(tira_polaca[j+2].tag[1] == 'i'){
                    if(tira_polaca[j+2].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+2].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }
                    else{
                    strcpy(auxiliarCV, tira_polaca[j+2].cell);
                    fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                    fflush(final_asm);
                    }
                }

                fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                fflush(final_asm); 
            //////////////////////////////////////////////////////////
                
            ////////////////////////////////////////////////////////// pregunto por comparador   ------
                if(strcmp(tira_polaca[j+4].cell, ";BLE;") == 0){  //OPERADOR mayor
                    fprintf (final_asm, "jna %s\n\n", skipPointsC(f_if_cell));
                    fflush(final_asm); 
                    fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j].cell));
                    fflush(final_asm);
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BGE;") == 0){ //menor
                    fprintf (final_asm, "jnb %s\n\n",skipPointsC(f_if_cell));
                    fflush(final_asm); 
                    fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j].cell));
                    fflush(final_asm);

                }
                else if(strcmp(tira_polaca[j+4].cell, ";BGT;") == 0){  // menor igual
                    fprintf (final_asm, "jnbe %s\n\n", skipPointsC(f_if_cell));
                    fflush(final_asm); 
                    fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j].cell));
                    fflush(final_asm); 
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BLT;") == 0){ //mayor igual
                    fprintf (final_asm, "jnae %s\n\n", skipPointsC(f_if_cell));
                    fflush(final_asm); 
                    fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j].cell));
                    fflush(final_asm); 
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BNE;") == 0){ //igual
                    fprintf (final_asm, "jne %s\n\n", skipPointsC(f_if_cell));
                    fflush(final_asm); 
                    fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j].cell));
                    fflush(final_asm); 
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BEQ;") == 0){ //distinto
                    fprintf (final_asm, "je %s\n\n", skipPointsC(f_if_cell));
                    fflush(final_asm); 
                    fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j].cell));
                    fflush(final_asm); 
                }
                ////////////////////////////////////////////////////////////
                j=j+4; //nueva linea par if
            }  
            
            // AND y OR
            else if (strcmp(tira_polaca[j+7].cell, ";CMP;") == 0){  // Aca va el codigo del AND, OR y ??NOT? para los IFS
                //                                                      AND DEL IF
                if(strcmp(tira_polaca[j+9].cell, ";AND;") == 0){
                    j = j+9;
                    printf("\n\nEs una condicion con AND, en el indice %d\n\n", j);

                    ///     c om p a r a c i o n    1
                    
                    // primer operando
                    if(tira_polaca[j-8].tag[1] == 'r'){ // si es real
                         if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-8].tag[1] == 'i'){
                        if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-7].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-7].tag[1] == 'i'){
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm); 
                    
                    // Simbolo comparador No. 1
                    if(strcmp(tira_polaca[j-5].cell, ";BLE;") == 0){  //mayor
                        fprintf (final_asm, "jna %s\n\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGE;") == 0){ //menor
                        fprintf (final_asm, "jnb %s\n\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGT;") == 0){  // menor igual
                        fprintf (final_asm, "jnbe %s\n\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BLT;") == 0){ //mayor igual
                        fprintf (final_asm, "jnae %s\n\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BNE;") == 0){ //igual
                        fprintf (final_asm, "jne %s\n\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BEQ;") == 0){ //distinto
                        fprintf (final_asm, "je %s\n\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                    }

                    ///     c om p a r a c i o n    2

                    // primer operando
                    if(tira_polaca[j-4].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-4].tag[1] == 'i'){
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-4].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-3].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-3].tag[1] == 'i'){
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm);
                    // Simbolo comparador No. 2
                    if(strcmp(tira_polaca[j-1].cell, ";BLE;") == 0){  //mayor
                        fprintf (final_asm, "jna %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        //fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        //fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGE;") == 0){ //menor
                        fprintf (final_asm, "jnb %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        //fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        //fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGT;") == 0){  // menor igual
                        fprintf (final_asm, "jnbe %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        //fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        //fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BLT;") == 0){ //mayor igual
                        fprintf (final_asm, "jnae %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        //fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        //fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BNE;") == 0){ //igual
                        fprintf (final_asm, "jne %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        //fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        //fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BEQ;") == 0){ //distinto
                        fprintf (final_asm, "je %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        //fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        //fflush(final_asm);
                    }
                }
                // OR DEL IF
                else if(strcmp(tira_polaca[j+9].cell, ";OR;") == 0){ 
                    j = j+9;
                    printf("\n\nEs una condicion con OR, en el indice %d\n\n", j);

                    ///     c om p a r a c i o n    1
                    
                    // primer operando
                    if(tira_polaca[j-8].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-8].tag[1] == 'i'){
                        if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-7].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-7].tag[1] == 'i'){
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm); 
                    
                    // Simbolo comparador No. 1                                     estos saltan por VERDADERO
                    if(strcmp(tira_polaca[j-5].cell, ";BLE;") == 0){  //mayor           A>7 jna
                        strcpy(auxiliarCV, tira_polaca_copia[j-9].cell); // guarda el valor de la celda ;value;
                        fprintf (final_asm, "ja %s\n\n",skipPointsC(auxiliarCV));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGE;") == 0){ //menor       A<7 jnb
                        strcpy(auxiliarCV, tira_polaca_copia[j-9].cell);
                        fprintf (final_asm, "jb %s\n\n",skipPointsC(auxiliarCV));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGT;") == 0){  // menor igual   jnbe 
                        strcpy(auxiliarCV, tira_polaca_copia[j-9].cell);
                        fprintf (final_asm, "jna %s\n\n",skipPointsC(auxiliarCV));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BLT;") == 0){ //mayor igual     jnae
                        strcpy(auxiliarCV, tira_polaca_copia[j-9].cell);
                        fprintf (final_asm, "jnb %s\n\n",skipPointsC(auxiliarCV));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BNE;") == 0){ //igual   jne
                        strcpy(auxiliarCV, tira_polaca_copia[j-9].cell);
                        fprintf (final_asm, "je %s\n\n",skipPointsC(auxiliarCV));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BEQ;") == 0){ //distinto    je
                        strcpy(auxiliarCV, tira_polaca_copia[j-9].cell);
                        fprintf (final_asm, "jne %s\n\n",skipPointsC(auxiliarCV));
                        fflush(final_asm);
                    }

                    ///     c om p a r a c i o n    2

                    // primer operando
                    if(tira_polaca[j-4].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-4].tag[1] == 'i'){
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-4].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-3].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-3].tag[1] == 'i'){
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm);
                    // Simbolo comparador No. 2
                    if(strcmp(tira_polaca[j-1].cell, ";BLE;") == 0){  //mayor
                        fprintf (final_asm, "jna %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGE;") == 0){ //menor
                        fprintf (final_asm, "jnb %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGT;") == 0){  // menor igual
                        fprintf (final_asm, "jnbe %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BLT;") == 0){ //mayor igual
                        fprintf (final_asm, "jnae %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BNE;") == 0){ //igual
                        fprintf (final_asm, "jne %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BEQ;") == 0){ //distinto
                        fprintf (final_asm, "je %s\n",skipPointsC(f_if_cell));
                        fflush(final_asm);
                        fprintf (final_asm, "%s: ;codigo del then\n\n", skipPointsC(tira_polaca_copia[j-9].cell));
                        fflush(final_asm);
                    }

                }

               
            }

            //j=j+4;   llega al indice donde estan los comparadores
            
        } //  * Fin IF_I *

        if(strcmp(tira_polaca[j].cell, ";IF_F;") == 0){
            int number = atoi(skipPointsC(tira_polaca_copia[j-2].cell)) - 1;
            //printf("NNNNNNumber es %d\n",number);
            fprintf (final_asm, "jmp %s\n\n", skipPointsC(tira_polaca_copia[number].cell));
            fflush(final_asm); 
            fprintf (final_asm, "%s: ;codigo del else\n\n", skipPointsC(tira_polaca_copia[j].cell));
            fflush(final_asm); 
        }

        if(strcmp(tira_polaca[j].cell, ";ELSE_F;") == 0){
            fprintf (final_asm, "%s:\n", skipPointsC(tira_polaca_copia[j].cell));
            fflush(final_asm); 
        }

        ///////////////////////////////////////////////////////////////////////////////////////////
        // W  H I L E
        ////////////
        if(strcmp(tira_polaca[j].cell, ";WH_I;") == 0){
            //////////////////////////////////////////////////////////copio operandos 
            strcpy(comp_cell, tira_polaca_copia[j].cell);
            printf("comp_cell es: %s\n", comp_cell);

            aux_cell = strtok(tira_polaca_copia[j].cell, ";WH_I"); // obtengo el numero de if
            //  para los fin de else
            strcpy(f_wh_cell, ";WH_F");
            strcat(f_wh_cell, aux_cell);
            strcat(f_wh_cell, ";"); //  guarda ;WH_F1;
            printf("f_wh_cell es: %s\n", f_wh_cell);

            if(strcmp(tira_polaca[j+7].cell, ";CMP;") != 0)
            {
                // ;WHI_I(N);
                fprintf (final_asm, "%s:\n",skipPointsC(tira_polaca_copia[j].cell) );
                fflush(final_asm);
                //////////////////////////////////////////////////////////copio operandos 
                if(tira_polaca[j+1].tag[1] == 'r'){ // si es real
                    if(tira_polaca[j+1].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+1].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }
                    else{
                        strcpy(auxiliarCV, tira_polaca[j+1].cell); // guarda el valor de la celda ;value;
                        fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                        fflush(final_asm);
                    }
                }else if(tira_polaca[j+1].tag[1] == 'i'){
                    if(tira_polaca[j+1].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+1].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }
                    else{
                        strcpy(auxiliarCV, tira_polaca[j+1].cell);
                        fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                        fflush(final_asm);
                    }
                }

                if(tira_polaca[j+2].tag[1] == 'r'){ // si es real
                    if(tira_polaca[j+2].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+2].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }
                    else{
                        strcpy(auxiliarCV, tira_polaca[j+2].cell); // guarda el valor de la celda ;value;
                        fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                        fflush(final_asm);
                    }
                }else if(tira_polaca[j+2].tag[1] == 'i'){
                    if(tira_polaca[j+2].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j+2].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                    }
                    else{
                        strcpy(auxiliarCV, tira_polaca[j+2].cell);
                        fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                        fflush(final_asm);
                    }
                }

                fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\nffree\n");
                fflush(final_asm); 
                //////////////////////////////////////////////////////////

                if(strcmp(tira_polaca[j+4].cell, ";BLE;") == 0){  //mayor
                    fprintf (final_asm, "jna %s\n",skipPointsC(f_wh_cell));
                    fflush(final_asm);
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BGE;") == 0){ //menor
                    fprintf (final_asm, "jnb %s\n",skipPointsC(f_wh_cell));
                    fflush(final_asm);

                }
                else if(strcmp(tira_polaca[j+4].cell, ";BGT;") == 0){  // menor igual
                    fprintf (final_asm, "jnbe %s\n",skipPointsC(f_wh_cell));
                    fflush(final_asm);
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BLT;") == 0){ //mayor igual
                    fprintf (final_asm, "jnae %s\n",skipPointsC(f_wh_cell));
                    fflush(final_asm);
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BNE;") == 0){ //igual
                    fprintf (final_asm, "jne %s\n",skipPointsC(f_wh_cell));
                    fflush(final_asm);
                }
                else if(strcmp(tira_polaca[j+4].cell, ";BEQ;") == 0){ //distinto
                    fprintf (final_asm, "je %s\n",skipPointsC(f_wh_cell));
                    fflush(final_asm);
                }
            } else if (strcmp(tira_polaca[j+7].cell, ";CMP;") == 0){  
                // Aca va el codigo del AND, OR y ??NOT? para los whiles
                //AND DEL WHILE
                if(strcmp(tira_polaca[j+9].cell, ";AND;") == 0){
                    printf("\n\nEs una condicion con AND, en el indice %d\n\n", j+9);
                    
                    j = j+9;
                    // ;WHI_I(Num);
                    fprintf (final_asm, "%s:\n",skipPointsC(tira_polaca_copia[j-9].cell) );
                    fflush(final_asm);
                    ///     c om p a r a c i o n    1
                    
                    // primer operando
                    if(tira_polaca[j-8].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-8].tag[1] == 'i'){
                        if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-7].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-7].tag[1] == 'i'){
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm); 
                    
                    // Simbolo comparador No. 1
                    if(strcmp(tira_polaca[j-5].cell, ";BLE;") == 0){  //mayor
                        fprintf (final_asm, "jna %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGE;") == 0){ //menor
                        fprintf (final_asm, "jnb %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);

                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGT;") == 0){  // menor igual
                        fprintf (final_asm, "jnbe %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BLT;") == 0){ //mayor igual
                        fprintf (final_asm, "jnae %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BNE;") == 0){ //igual
                        fprintf (final_asm, "jne %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BEQ;") == 0){ //distinto
                        fprintf (final_asm, "je %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }

                    ///     c om p a r a c i o n    2

                    // primer operando
                    if(tira_polaca[j-4].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-4].tag[1] == 'i'){
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                        strcpy(auxiliarCV, tira_polaca[j-4].cell);
                        fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                        fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-3].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-3].tag[1] == 'i'){
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm);
                    // Simbolo comparador No. 2
                    if(strcmp(tira_polaca[j-1].cell, ";BLE;") == 0){  //mayor
                        fprintf (final_asm, "jna %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGE;") == 0){ //menor
                        fprintf (final_asm, "jnb %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);

                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGT;") == 0){  // menor igual
                        fprintf (final_asm, "jnbe %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BLT;") == 0){ //mayor igual
                        fprintf (final_asm, "jnae %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BNE;") == 0){ //igual
                        fprintf (final_asm, "jne %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BEQ;") == 0){ //distinto
                        fprintf (final_asm, "je %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                    }
                } 
                // OR DEL WHILE
                else if(strcmp(tira_polaca[j+9].cell, ";OR;") == 0){
                    printf("\n\nEs una condicion con OR, en el indice %d\n\n", j+9);
                    
                    j = j+9;
                    // ;WHI_I(Num);
                    fprintf (final_asm, "%s:\n",skipPointsC(tira_polaca_copia[j-9].cell) );
                    fflush(final_asm);
                    ///     c om p a r a c i o n    1
                    
                    // primer operando
                    if(tira_polaca[j-8].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-8].tag[1] == 'i'){
                        if(tira_polaca[j-8].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-8].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-8].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-7].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-7].tag[1] == 'i'){
                        if(tira_polaca[j-7].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-7].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-7].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm); 
                    
                    strcpy(auxiliarORWH, f_wh_cell);
                    strcat(auxiliarORWH,"x");
                    // Simbolo comparador No. 1                                         SALTO X VERDADERO
                    if(strcmp(tira_polaca[j-5].cell, ";BLE;") == 0){  //mayor            jna
                        fprintf (final_asm, "ja %s\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGE;") == 0){ //menor       jnb
                        fprintf (final_asm, "jb %s\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);

                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BGT;") == 0){  // menor igual   jnbe
                        fprintf (final_asm, "jna %s\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BLT;") == 0){ //mayor igual     jnae
                        fprintf (final_asm, "jnb %s\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BNE;") == 0){ //igual           jne
                        fprintf (final_asm, "je %s\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-5].cell, ";BEQ;") == 0){ //distinto        je
                        fprintf (final_asm, "jne %s\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }

                    ///     c om p a r a c i o n    2

                    // primer operando
                    if(tira_polaca[j-4].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-4].tag[1] == 'i'){
                        if(tira_polaca[j-4].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-4].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-4].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }

                    // segundo operando
                    if(tira_polaca[j-3].tag[1] == 'r'){ // si es real
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(skipPesosC(changeRealC(skipPointsC(auxiliarCV)))));
                            fflush(final_asm);
                        }
                    }else if(tira_polaca[j-3].tag[1] == 'i'){
                        if(tira_polaca[j-3].cell[1] == '-') {
                                            fprintf (final_asm, "FLD _200m\nFLD _300m\nFSUB\nFFREE st(1)\nFSTP _100m\nFFREE st(0)\n");
                                            fflush(final_asm);
                                            strcpy(auxiliarCV, tira_polaca[j-3].cell); // guarda el valor de la celda ;value;
                                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                                            fflush(final_asm);
                                            fprintf (final_asm, "FLD _100m\nFMUL\nFFREE st(1)\n");
                                            fflush(final_asm);

                                            fprintf (final_asm, "fstp\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm); 
                                            
                                            fprintf (final_asm, "fld\t$%s\n", skipMenosOP(changeRealC(skipPesosC(skipPointsC(auxiliarCV)))));
                                            fflush(final_asm);                                  
                        }
                        else{
                            strcpy(auxiliarCV, tira_polaca[j-3].cell);
                            fprintf (final_asm, "fld\t$%s\n",skipMenosOP(skipPesosC(skipPointsC(auxiliarCV))));
                            fflush(final_asm);
                        }
                    }
                    
                    fprintf (final_asm, "fxch\nfcom\nfstsw ax\nsahf\n");
                    fflush(final_asm);
                    // Simbolo comparador No. 2
                    if(strcmp(tira_polaca[j-1].cell, ";BLE;") == 0){  //mayor
                        fprintf (final_asm, "jna %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                        fprintf(final_asm, "%s:\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGE;") == 0){ //menor
                        fprintf (final_asm, "jnb %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                        fprintf(final_asm, "%s:\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BGT;") == 0){  // menor igual
                        fprintf (final_asm, "jnbe %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                        fprintf(final_asm, "%s:\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BLT;") == 0){ //mayor igual
                        fprintf (final_asm, "jnae %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                        fprintf(final_asm, "%s:\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BNE;") == 0){ //igual
                        fprintf (final_asm, "jne %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                        fprintf(final_asm, "%s:\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }
                    else if(strcmp(tira_polaca[j-1].cell, ";BEQ;") == 0){ //distinto
                        fprintf (final_asm, "je %s\n",skipPointsC(f_wh_cell));
                        fflush(final_asm);
                        fprintf(final_asm, "%s:\n",skipPointsC(auxiliarORWH));
                        fflush(final_asm);
                    }


                }
            }

            //j=j+4; // llega al indice donde estan los comparadores
            ////////////////////////////////////////////////////////////
        }

        if(strcmp(tira_polaca[j].cell, ";WH_F;") == 0){
            int number2 = atoi(skipPointsC(tira_polaca_copia[j-2].cell)) - 1;
            fprintf (final_asm, "jmp %s\n\n", skipPointsC(tira_polaca_copia[number2].cell));
            fflush(final_asm); 
            fprintf (final_asm, "%s: ;fin de while\n\n", skipPointsC(tira_polaca_copia[j].cell));
            fflush(final_asm); 
        }

        if((strcmp(tira_polaca[j].tag, "#inicio_if\n") == 0)||(strcmp(tira_polaca[j].tag, "#inicio_wh\n") == 0)||
          (strcmp(tira_polaca[j].tag, "#fin_wh\n") == 0)||(strcmp(tira_polaca[j].tag, "#fin_if\n") == 0))
        {
            printf("  -- > Celda encontrada es: %s\n", tira_polaca[j].cell);
        }

        // PUT
        if(strcmp(tira_polaca[j].cell, ";PUT;") == 0){
            if((tira_polaca[j-1].tag[1]== 's')||(tira_polaca[j-1].tag[1]== 'c')){ // strings o csctrings
                fprintf (final_asm, "mov ah, 9\n");
                fflush(final_asm);
                strcpy(auxiliarCV, tira_polaca[j-1].cell);
                if(tira_polaca[j-1].cell[1] == '"'){
                        fprintf (final_asm, "mov DX,OFFSET $_%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                        fflush(final_asm);
                }
                else{
                    fprintf (final_asm, "mov DX,OFFSET $%s\n", skipPesosC(skipComillasC(skipPointsC(auxiliarCV))));
                    fflush(final_asm); 
                } 
                fprintf (final_asm, "int 21h\n");
                fflush(final_asm); 
                fprintf (final_asm, "MOV AH,02H\nMOV DL,0AH\nINT 21H\n");
                fflush(final_asm); 
            }
            else if((tira_polaca[j-1].tag[1]== 'i')||(tira_polaca[j-1].tag[1]== 'r')){  // digito reales
                strcpy(auxiliarCV, tira_polaca[j-1].cell);
                fprintf (final_asm, "DisplayFloat $%s, 2\n", skipPesosC(changeRealC(skipPointsC(auxiliarCV))));
                fflush(final_asm); 
                fprintf (final_asm, "MOV AH,02H\nMOV DL,0AH\nINT 21H\n");
                fflush(final_asm); 
            }
        }

        //GET
        if(strcmp(tira_polaca[j].cell, ";GET;") == 0){
            //mov ah,3fh (funcion scanf)
            //mov bx,00
            //mov cx,100 (la longitud maxima de la cadena a tomar)
            //mov dx, offset[var] (variable donde se guarda)
            //int 21h
            fprintf (final_asm, "mov ah, 3fh    ;REALIZO EL GET\n");
            fflush(final_asm); 
            fprintf (final_asm, "mov bx,00\n");
            fflush(final_asm);
            fprintf (final_asm, "mov cx,100\n");
            fflush(final_asm);
            fprintf (final_asm, "mov dx, offset[$%s]\n",skipPesosC(skipPointsC(tira_polaca[j-1].cell)));
            fflush(final_asm); 
            fprintf (final_asm, "int 21h\n");
            fflush(final_asm); 

            //para comprobar que se guardo correctamente
            fprintf (final_asm, "mov ah, 9      ;IMPRIMO PARA VER SI GUARD?? CORRECTAMENTE\n");
            fflush(final_asm); 
            fprintf (final_asm, "mov DX,OFFSET $%s\n", skipPesosC(skipComillasC(tira_polaca[j-1].cell)));
            fflush(final_asm);
            fprintf (final_asm, "int 21h\n");
            fflush(final_asm);

        }
    
    }// FIN FOR

    //INSTRUCCIONES DE FIN DE ASM
    fprintf (final_asm, "\nmov ax,4c00h\n");
    fflush(final_asm);
    fprintf (final_asm, "int 21h\n");
    fflush(final_asm); 
    fprintf (final_asm, "End START\n");
    fflush(final_asm);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char * skipPointsC(char celda_tira []){
    char aux_celda_tira[30] = {0}; // omito los ;
    int index_aux=-1;
    int lt=0;

    // limpio vector
    for(lt=0; lt<30; lt++){
        aux_celda_tira[lt] = '\0';
    }

    for(lt=0; lt<strlen(celda_tira); lt++){
        if(celda_tira[lt] != ';'){
            index_aux++;
            aux_celda_tira[index_aux] = celda_tira[lt];
        }
    }
    strcpy(celda_tira, aux_celda_tira);
    return celda_tira;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char * skipComillasC(char string []){
    char aux_string[30] = {0}; // omito los ;
    int index_aux=-1;
    int lt=0;

    // limpio vector
    for(lt=0; lt<30; lt++){
        aux_string[lt] = '\0';
    }

    for(lt=0; lt<strlen(string); lt++){
        if(string[lt] != '"'){
            index_aux++;
            aux_string[index_aux] = string[lt];
        }
    }
    strcpy(string,aux_string);
    return string;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char * skipPesosC(char celda_tira []){
    char aux_celda_tira[30] = {0}; // omito los ;
    int index_aux=-1;
    int lt=0;

    // limpio vector
    for(lt=0; lt<30; lt++){
        aux_celda_tira[lt] = '\0';
    }

    for(lt=0; lt<strlen(celda_tira); lt++){
        if(celda_tira[lt] != '$'){
            index_aux++;
            aux_celda_tira[index_aux] = celda_tira[lt];
        }
    }
    strcpy(celda_tira, aux_celda_tira);
    return celda_tira;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char * skipMenosOP(char celda_tira []){
    char aux_celda_tira[30] = {0}; // omito los ;
    int index_aux=-1;
    int lt=0;

    // limpio vector
    for(lt=0; lt<30; lt++){
        aux_celda_tira[lt] = '\0';
    }

    for(lt=0; lt<strlen(celda_tira); lt++){
        if(celda_tira[lt] != '-'){
            index_aux++;
            aux_celda_tira[index_aux] = celda_tira[lt];
        }
    }
    strcpy(celda_tira, aux_celda_tira);
    return celda_tira;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char * changeRealC(char stringR []){
    char aux_string[30] = {0}; // omito los ;
    int index_aux=-1;
    int lt=0;

    // limpio vector
    for(lt=0; lt<30; lt++){
        aux_string[lt] = '\0';
    }

    for(lt=0; lt<strlen(stringR); lt++){
        if(stringR[lt] != '.'){
            index_aux++;
            aux_string[index_aux] = stringR[lt];
        }else if(stringR[lt] == '.'){
            index_aux++;
            aux_string[index_aux] = '_';
        }
    }
    // limpio vector
    for(lt=0; lt<30; lt++){
        stringR[lt] = '\0';
    }
    strcpy(stringR,aux_string);
    return stringR;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
void contar_if_wh(){
    char aux[40]={0};
    int if_pila[40]={0};
    int if_pila2[40]={0};
    int wh_pila[40]={0};
    int cont_if=0;
    int cont_if2=0;
    int cont_wh=0;
    int indice_if=0;
    int indice_if2=0;
    int indice_wh=0;

    tira_polaca_copia = (tira*)malloc(indice_tira*sizeof(tira));
    if(tira_polaca_copia==NULL){
        printf("No se asign?? memoria correctamente para tira_polaca\n");
    }

    // Lleno la copia de la tira polaca original
    for(int ind_t=0; ind_t<indice_tira; ind_t++){
        strcpy(tira_polaca_copia[ind_t].index, tira_polaca[ind_t].index);
        strcpy(tira_polaca_copia[ind_t].cell, tira_polaca[ind_t].cell);
        strcpy(tira_polaca_copia[ind_t].tag, tira_polaca[ind_t].tag);
    }

    for(int i=0; i<indice_tira;i++){
        if(strcmp(tira_polaca_copia[i].cell,";IF_I;")==0){
            cont_if++;
            indice_if++;
            cont_if2++;
            indice_if2++;
            sprintf(aux,"%d",cont_if);
            strcpy(tira_polaca_copia[i].cell,";IF_I");
            strcat(tira_polaca_copia[i].cell,aux);
            strcat(tira_polaca_copia[i].cell,";");
            if_pila[indice_if-1]=cont_if; 
            if_pila2[indice_if2-1]=cont_if2;           
        }
        if(strcmp(tira_polaca_copia[i].cell,";WH_I;")==0){
            cont_wh++;
            indice_wh++;
            sprintf(aux,"%d",cont_wh);
            strcpy(tira_polaca_copia[i].cell,";WH_I");
            strcat(tira_polaca_copia[i].cell,aux);
            strcat(tira_polaca_copia[i].cell,";");
            wh_pila[indice_wh-1]=cont_wh;
        }
        if(strcmp(tira_polaca_copia[i].cell,";ELSE_F;")==0){
            sprintf(aux,"%d",if_pila[indice_if-1]);
            strcpy(tira_polaca_copia[i].cell,";ELSE_F");
            strcat(tira_polaca_copia[i].cell,aux);
            strcat(tira_polaca_copia[i].cell,";");
            if_pila[indice_if-1]='\0';
            indice_if--;      
        }
        if(strcmp(tira_polaca_copia[i].cell,";IF_F;")==0){
            sprintf(aux,"%d",if_pila2[indice_if2-1]);
            strcpy(tira_polaca_copia[i].cell,";IF_F");
            strcat(tira_polaca_copia[i].cell,aux);
            strcat(tira_polaca_copia[i].cell,";");
            if_pila2[indice_if2-1]='\0';
            indice_if2--;           
        }
        if(strcmp(tira_polaca_copia[i].cell,";WH_F;")==0){
            sprintf(aux,"%d",wh_pila[indice_wh-1]);
            strcpy(tira_polaca_copia[i].cell,";WH_F");
            strcat(tira_polaca_copia[i].cell,aux);
            strcat(tira_polaca_copia[i].cell,";");
            wh_pila[indice_wh-1]='\0';
            indice_wh--;           
        }

    }
    cant_selecciones=cont_if;
    cant_bucles=cont_wh;

    printf("\n Cantidad de ifs: %d\n",cont_if) ;   
    printf("\n Cantidad de wh: %d\n",cont_wh) ;
    mostrar_polaca();    
    //printTiraPolaca(); 

     // Muestro la copia de la tira polaca original
     for(int ind_t=0; ind_t<indice_tira; ind_t++){
         printf("tira copia es: %s\t%s\t%s\n", tira_polaca_copia[ind_t].index,tira_polaca_copia[ind_t].cell,tira_polaca_copia[ind_t].tag);
     }
}
