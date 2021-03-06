#include <stdlib.h>

#include "search_internals.h"

void dispose_search(struct ac_data *data) {
    if (data != NULL) {
        freeTrie(data->words);
        for (size_t n = 0; n < data->max_size; ++n) {
            freeTrie(data->sortie[n]);
        }
        free(data->sortie);
        free(data->suppl);
        free(data);
    }
}
