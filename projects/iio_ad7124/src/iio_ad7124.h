#ifndef IIO_AD7124_H
#define IIO_AD7124_H

#include "iio.h"
#include "ad7124.h"

struct iio_ad7124_desc {
};

struct iio_ad7124_init_param {
};

ssize_t ad1724_iio_read_configuration(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_configuration(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_filter(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_filter(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_offset(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_offset(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_gain(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_gain(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_status(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_adc_ctrl(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_adc_ctrl(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_ioctrl1(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_ioctrl1(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_ioctrl2(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_ioctrl2(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_id(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_error(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_error_en(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_error_en(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_chan_setup(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_chan_setup(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_chan_ainp(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_chan_ainp(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_read_chan_ainm(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
ssize_t ad1724_iio_change_chan_ainm(void *device, char *buf, size_t len,
			const struct iio_ch_info *channel);
int32_t iio_ad7124_init(struct iio_ad7124_desc **desc,
		struct iio_ad7124_init_param *init_param);
int32_t iio_ad7124_remove(struct iio_ad7124_desc *desc);

#endif /** IIO_AD7124_H */
