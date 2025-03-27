.open planets.db

drop table if exists planets; 
create table planets (
	name varchar(32) primary key,
	dmtr integer not null,
	is_alive boolean not null,
	sats integer not null
);

.mode csv
.import --skip 1 data/planets_df.csv planets
