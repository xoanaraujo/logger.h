# logger.h 
Simple logging header file 

**Levels of logging**:
- `LOG_TRACE`
- `LOG_DEBUG`
- `LOG_INFO`
- `LOG_WARN`
- `LOG_ERROR`
- `LOG_CRIT`

By default the logs are printed into the stderr stream. To override this 
behaviour define `LOG_OUT`.

### Examples

#### Logging into global.log
```
#include <stdio.h>

#define LOG_OUT logger_file
#define LOG_LEVEL_INFO
#include "logger.h"

static FILE *logger_file;

int main(int argc, char *argv[]) {
  logger_file = fopen("global.log", "w");

  LOG_INFO("README.md", "This will be logged.")
  LOG_DEBUG("README.md", "This won't.")

  fclose(logger_file);
  return 0;
}
```

#### Logging into stderr
```
#define LOG_LEVEL_INFO
#include "logger.h"

int main(int argc, char *argv[]) {

  LOG_INFO("README.md", "This will be logged.")
  LOG_DEBUG("README.md", "This won't.")

  return 0;
}
```

