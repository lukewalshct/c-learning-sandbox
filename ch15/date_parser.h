#ifndef DATE_PARSER_H

#define DATE_PARSER_H

int * parse_dates(char date_segs[NUM_SEGS][DATE_SEG_MAX+1]);
void validate_dates(int dates[NUM_SEGS]);

#endif
