#ifndef VEBRQL_H_
#define VEBRQL_H_

typedef struct RangeFunctionRange {
  char *low;
  char *high;
} RangeFunctionRange;

char *resolveFunction(char *function, char **args);
RangeFunctionRange resolveRangeFunction(char *function, char **args);
char *resolvePath(char *path);
char *resolveVariable(char *variable);

#endif
